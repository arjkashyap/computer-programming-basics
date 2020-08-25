// Implementing queue via array

#include<iostream>
using namespace std;
#define MAX_SIZE 10

int front = -1, rear = -1;      // Initailly set front and rear -1
int arr[MAX_SIZE];

bool isFull(){
    if(rear == MAX_SIZE -1){ return true; }
    return false;
}

bool isEmpty(){
    if(front == rear){ return true; }
    return false;
}

// Inserting element in the queue.
void enqueue(int a){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return;
    }
    else if(isEmpty()){
        front = 0;
        rear = 0;
    }
   rear += 1;   
   arr[rear] = a;
}

void dequeue(){
    if(isEmpty()){ 
        cout<<"queue is empty"<<endl;
        return; 
    }

    // if there is only one element
    else if(front == rear){
        front = -1;
        rear = -1;
    }
    else{
        front +=1;
    }
}

void display(){
    if(isEmpty()){ 
        cout<<"Queue is empty"<<endl;
        return;
    }
    else{
        for(int i = front; i <= rear; i++)
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    enqueue(3);
    enqueue(6);
    enqueue(14);
    enqueue(9);
   
    display();
    dequeue();
    dequeue();
    dequeue();
    display();

    return 0;
}
