// Reversing a linked lists using iterative method.

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

// Reverse method that returns header to reversed list
struct Node* reverse(Node* head){
	struct Node *prev, *current, *nxt;
	current = head;
	prev = NULL;
	// Main logic
	while(current != NULL){
		nxt = current -> next;
		current -> next = prev;
		prev = current;
		current = nxt;
		}
	head = prev;
	return head;
}

// Small insert function
struct Node* insert(struct Node* h, int a){
	struct Node* ptrNew = new Node;
	ptrNew -> data = a;
	ptrNew -> next = h;
	h = ptrNew;
	return h;
}

// Display list
void display(struct Node* h){
    struct Node* ptr = h;
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
	struct Node* header = NULL; 		// Local variable
	display(header);
	header = insert(header, 4);			// Inserting nodes and returning header
	header = insert(header, 13);
	header = insert(header, 21);
	header = insert(header, 22);
	header = insert(header, 77);
	header = insert(header, 99);
	display(header);			// Print list
	header = reverse(header);	// Reverse list and return header
	display(header);
	return 0;
}

