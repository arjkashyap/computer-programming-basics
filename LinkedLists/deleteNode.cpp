// Deleting a node at nth position in a linked list.

#include<iostream>
using namespace std;

struct Node{
    int data; 	// data
    struct Node* next;		// ptr to next node
};

struct Node* head;

// A quick insertion function.
void insert( int a ){
    struct Node* temp1 = new Node;
    temp1 -> data = a;
    temp1 -> next = head;
    head = temp1;
}

// Delete node at nth position
void del( int n){
    if( head == NULL ){
        cout<<"List is empty."<<endl;    // Underflow
	return;
    }
    struct Node* temp1 = head;		// Create a temp pointer
    if( n == 1){         		// To delete first node.
    	head = temp1 -> next;
	delete temp1;
	return;
    }
    for(int i = 0; i < n-2; i++){
        temp1 = temp1 -> next;	       // Take the pointer to n-1 node
    }
    struct Node* temp2 = temp1 -> next;	// pointer to the nth node
    temp1 -> next = temp2 -> next;     // next value switched in n-1 node
    delete temp2;
    cout<<"Node is deleted"<<endl;
}

void display(){
    struct Node* ptr = head;
    if(ptr == NULL){
	cout<<"List is empty."<<endl;
	return;
    }
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr -> next;
    }
    cout<<endl;
}

int main(){
    display();
    insert(7);insert(2);insert(53);insert(61);insert(17);insert(3);
    display();
    del(3);		// Delete node at 3rd position
    display();
    return 0;
}













