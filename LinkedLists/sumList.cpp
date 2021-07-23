#include<iostream>
#include<vector>
#include<stack>
using namespace std;


/*
You have two linkedlist where each node is respective ll represents 
digit of a number starting from ones place as root. You have to sum these 
two ll
ex:
	i/P: 7 -> 1 -> 6     		one position is at the head
		 5 -> 9 -> 2 
	o/p: 912					617 + 295
	
	
	i/p: 7 -> 1 -> 6
	o/p: 5 -> 9 -> 2 -> 1     1296 + 617
*/

struct Node 
{
	int data;
	struct Node* next;
	
	Node(int data)
	{
		this -> data = data;
		next = nullptr;
	}
};

struct Node* Insert(Node* root, int data)
{
	struct Node* newNode = new Node(data);
	if(root == nullptr)
		return newNode;

	Node* tmp = root;
	while(tmp -> next != nullptr)
	{
		tmp = tmp -> next;
	}

	tmp -> next = newNode;
	
	return root;
}

void Display(Node* root)
{
	while(root){
		cout << root -> data << " -> ";
		root = root -> next;
	}
	cout << "null" << endl;
}

// reverses the number 123 -> 321
int reverseNum(int num)
{
	int reversed = 0;
	while(num){
		int lastNum = num % 10; 		// digit at ones place
		num = num / 10;
		reversed = reversed*10 + lastNum;
	}
	return reversed;
}

int getSum(Node* r1, Node* r2)
{
	int res = 0, carry=0;
	int sum;		// tmp sum
	while(r1 && r2){
		sum = ((r1 -> data) + (r2 -> data)) + carry;
		// if sum = 13, carry = 1, sum = 3
		carry =  sum >= 10 ?  (sum / 10) : 0;     // if sum = 3/10
		sum = sum % 10;
		res = (res*10 + sum);
		r1 = r1 -> next;
		r2 = r2 -> next;
	}
	// if 2 -> 3 -> 3 -> 2;  1->9
	// 324
	
	while(r1){
		sum = (r1 -> data) + carry;
		carry =  sum > 10 ?  (sum / 10) : 0;     // if sum = 3/10
		res = (res*10 + sum);	
		r1 = r1 -> next;
	}
	while(r2){
		sum = (r2 -> data) + carry;
		carry =  sum > 10 ?  (sum / 10) : 0;     // if sum = 3/10
		res = (res*10 + sum);	
		r2 = r2 -> next;	
	}
	while(carry > 0){
		res =  (res*10) + (carry%10);
		carry = carry/10;
	}
	res = reverseNum(res);
	return res;
}

int main()
{
	int n1, n2;
	// number of elements in the linked list
	cin >> n1 >> n2;
	Node* r1 = nullptr;
	Node* r2 = nullptr;
	cout << "First ll" << endl;
	for(int i = 0; i < n1; i++)
	{
		int x;
		cin >> x;
		r1 = Insert(r1, x);
	}
	Display(r1);
	cout << "Second ll" << endl;
	for(int i = 0; i < n2; i++){
		int x;
		cin >> x;
		r2 = Insert(r2, x);
	}
	Display(r2);
	int sum = getSum(r1, r2);
	cout << sum << endl;
	return 0;
}