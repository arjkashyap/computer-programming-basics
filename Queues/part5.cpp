// Reversing the elements of a queue
#include<iostream>
#include<stack>
#define MAX_SIZE 10
using namespace std;

class MyQueue{
    int arr[MAX_SIZE];
    int front = -1;
    int rear = -1
    public: 
        void display();
        void enq(int);
        void deq(int);
        void reverse();
}

void MyQueue::enq(int a){
    if(front == MAX_SIZE -1){
        cout<<"Queue is full"endl;
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
        arr[front] = a;
        return;
    }

    rear += 1;
    arr[rear] = a;
    return;
}

void MyQueue::deq(){
    if(front == -1){ cout<<"Queue is empty."<<endl; return; }
    front += 1;
}

void MyQueue::display(){
    if(front == -1){
        cout<<"Queue is empty" <<endl;
        return;
    }
    for(int i = front; i <= rear; i++){
        cout<<arr[i]<<" "<<end;
    }
    cout<<endl;
}

void MyQueue::reverse(){
    stack<int> S;
    while(front != rear){
        S.push(arr[front]);
        dequeue();
    }
    while(!S.empty()){
        enq(S.top());
        S.pop();
    }
}

int main(){
    MyQueue Q;
    Q.enq(213);
    Q.enq(12);
    Q.enq(3);
    Q.enq(32);
    Q.display();
    Q.deq();
    Q.reverse();
    Q.dispaly();
    return 0;
}







