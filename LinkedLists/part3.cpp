
//  Insertion and Deletion in linked list using user input

#include<iostream>
using namespace std;

struct Node{
	int data;			
	Node* next;			// Pointer to next node
};

struct Node* head = NULL;	

// Insert Function
void insert(int a){
	struct Node* newNode = new Node;
	newNode -> data = a;
	newNode -> next = head;
	head = newNode;
}

// Display List
void display(){
	if (head == NULL){
		cout<<"List is empty.."<<endl;
		return;
	}
	struct Node* temp = head;	// Pointer
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

// Delete node from start
void del(){
	if( head == NULL ){
		cout<<"Linked list is empty.."<<endl;
		return;
	}
	head = head -> next;
	cout<<"Node is deleted. Updated List: "<< endl;
	display();
}

int main(){
	int n, a, t;
	display();
	cout<<"Enter the number of elements you want to insert."<<endl;
	cin>>n;
	t = n;
	cout<<"Enter the elements of the linked list."<<endl;
	while(n > 0){
		cin>>a;
		insert(a);
		n -= 1;
	}
	cout<<"linked list: "<<endl;
	display();
	cout<<"deleting items one by one: "<<endl;
	while(t>0){
		del();
		t-=1;
	}
	return 0;
}
