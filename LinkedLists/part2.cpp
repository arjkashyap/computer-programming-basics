// Inserting node at the end of the linked list

#include<iostream>
using namespace std;

struct Node{
	int data;			// Holds data
	Node* next;			// Hold pointer to next node
};

struct Node* head = NULL;    // declare header

void insert(int a){		// Insertion function
	struct Node* newNode = new Node;	
	newNode -> data = a;
	newNode -> next = head;
	head = newNode;
}

void display(){
	if(head == NULL){
		cout<<"List is Empty.."<<endl;
		return;	
	}
	struct Node* temp = head;		// temperory pointer
	while( temp != NULL ){
		cout<<temp->data<<" ";
		temp = temp->next;		
	}
	cout<<endl;
}

int main(){	
	display(); 		// Display empty list.

	// Insert data 	
	insert(2);
	insert(4);
	insert(9);
	insert(11);
	
	display();
	return 0;
}















