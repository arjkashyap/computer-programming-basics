// Introduction to linked lists
// We will create 3 nodes

#include<iostream>
using namespace std;

class Node{
	public:
	    int data;
		Node* next;
};

int main(){

    // Create pointers to nodes
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Create three nodes to heap
    head = new Node();
    second = new Node();
    third = new Node();

    head -> next = second;	// Allocating the address of second node to head

    second -> data = 2;
    second -> next = third;
    
    third -> data = 4;
    third -> next = NULL;	// End of list

    return 0;
}
