// Inserting a node at nth position in a linked list.

#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

struct Node* head; 		// Empty linked list.

// Insert int a at nth position.
void insert(int a, int n){
	Node* temp1 = new Node;  	// Create a new node
	temp1 -> data = a;			// Set data in node
	temp1 -> next = NULL;
	
	if( n == 1){			// If node is inserted at 1st position
		head = temp1;
		return;
	}
	
	Node* temp2 = head;
	for(int i = 0; i < n-2; i++){
		temp2 = temp2 -> next;
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;
	return;
}

void display(){			// Print elements of the list.
	if( head == NULL ){
		cout<<"List is empty."<<endl;
		return;
	}
	Node* ptr = head;
	while(ptr != NULL){
	cout<<ptr->data<<" ";
	ptr = ptr -> next;
	}
	cout<<endl;
}

int main(){
	display();
	insert(2, 1);	// 2
	insert(5, 2);	// 2, 5
 	insert(1, 3);	// 2, 5, 1
 	insert(21, 2);	// 2, 21, 5, 1
 	insert(49, 3);	// 2, 21, 49, 5, 1
 	display();
 	return 0;
}






























