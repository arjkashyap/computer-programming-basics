// Doubly linked lists
// Insertion and Traversal

#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;		// Create a global head

// Method for creating a new node
struct Node* getNewNode(int a){		
	struct Node* newNode = new Node;
	newNode -> data = a;
	newNode -> prev = NULL;
	newNode -> next = NULL;
	return newNode;
}

// Inserting node in front of the list
void insertFront(int a){
	struct Node* newNode = getNewNode(a);
	
	// If the list is empty
	if(head == NULL){
		head = newNode;
		return;
	}
	
	newNode -> next = head;
	head -> prev = newNode;
	head = newNode;
}

// Insert node in end of the list
void insertBack(int a){
	struct Node* newNode = getNewNode(a);
	
	// If the list is empty
	if(head == NULL){
		head = newNode;
		return;
	}
	
	struct Node* ptr = head;
	while(ptr != NULL){
	    if(ptr -> next == NULL){
	    	ptr -> next = newNode;
	    	return; 
	    }
	    ptr = ptr -> next;
	}
}

// Display linked list
void display(){
	if(head == NULL){
		cout<<"list is empty.. "<<endl;
		return;
	}
	struct Node* temp = head;
	// Take the pointer to the end of the list.
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}

int main(){
	insertFront(7);
	insertFront(4);
	insertFront(66);
	insertFront(5);
	display();
	insertBack(99);
	display();
}

