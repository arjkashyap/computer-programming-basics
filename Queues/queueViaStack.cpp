// Implementing Queues by Stack

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

// Inserting element in the end of the queue
void enqueue(int a){
    struct Node* newNode = new Node;    // Create a new node
     newNode -> next = NULL;
     newNode -> data = a;
    // if the queue is empty
    if(head == NULL){
       head = newNode;
       return;
    }
    struct Node* ptr = head;
   // take the ptr to the end of the queue
    while(ptr != NULL){
        if(ptr -> next == NULL){
            ptr -> next = newNode;
            return;
        }
        ptr = ptr -> next;
    }
}

// Deleting element
void dequeue(){
    if(head == NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    struct Node* ptr = head;
    head = head -> next;
    delete ptr;
}

// Display elements of the queue
void display(){
    if(head == NULL){
        cout<<"Queue is empty"<<endl;
        return;
    }
    struct Node* ptr = head;
    while(ptr != NULL){
        cout <<ptr -> data<<" ";
        ptr = ptr -> next;
    }
    cout<<endl;
}

int main(){
    display();
    enqueue(3);enqueue(5);enqueue(16);enqueue(18);enqueue(2);
    display();
    dequeue();dequeue();dequeue();
    display();
    dequeue();dequeue();
    dequeue();
    return 0;
}










