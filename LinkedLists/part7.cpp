// Printing the elements of the linked lists using recursion.

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};



// Inserting element in the linked list
struct Node* insert(struct Node* head, int a){
	struct Node* temp1 = new Node;
	temp1 -> data = a;
	temp1 -> next = head;
	head = temp1;
	return head;
}

// Print linked list using recursion
void display(struct Node* head){
	if(head == NULL) return;
	cout<<head->data<<" ";
	display(head->next);	// Call to function.
	
}

int main(){
	struct Node* head = NULL;
	// Inserting elements in the linked list.
	head = insert(head, 3);		// 3
	head = insert(head, 7);		// 7 3
	head = insert(head, 21);	// 21 7 3
	head = insert(head, 37);	// 37 21 7 3
	head = insert(head, 41);	// 41 37 21 3
	display(head);
	cout<<endl;
	return 0;
}


