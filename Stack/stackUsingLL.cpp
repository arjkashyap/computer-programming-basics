// Implementation of Stack using Linked Lists
// Here head nodes becomes top

#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

struct Node* top;	

// Inserting element at the top
void push(int a){
	struct Node* newNode = new Node;	// Create a new node
	newNode -> data = a;
	newNode -> next = top;
	top = newNode;
}

// Delete element from the top
void pop(){
	if(top == NULL){
		cout<<"Underflow"<<endl;
		return;
	}
	struct Node* temp = top;
	top = top -> next;
	delete temp;
}

// Display Elements
void display(){
	if(top == NULL){
		cout<<"List is empty."<<endl;
		return;
	}
	struct Node* ptr = top;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}	
	cout<<endl;
}

int main(){
	display();
	push(4);push(1);push(21);push(7);push(45);
	display();
	pop();pop();
	display();
	return 0;
}







