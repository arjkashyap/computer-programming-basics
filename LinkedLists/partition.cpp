#include<iostream>
#include<vector>
using namespace std;


/*
All the node less than x come before all the nodes greater than or 
equal to x

	i/p = 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1  ; x = 5
	o/p = 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8
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

void partition(node* root, int x)
{
//	node* xNode = root;
//	while(xNode != nullptr && xNode -> data != x){
//		xNode = xNode -> next;
//	}
	
	node* ptr = root;  
	while(node){
		
		node -> next;
	}
}

int main()
{
	int n, x;
	cin >> n;
	Node* root=nullptr;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		root = Insert(root, a);
	}
	cin >> x;
	
	Display(root);
	partition(root, x);
	Display(root);
	return 0;
}