// Impleenting que via stack

#include<iostream>
#include<stack>

using namespace std;

class Queue{
    public:

        stack<int> s1;
        stack<int> s2;
        void enqueue(int);
        void dequeue();
        int front();
};

void Queue::enqueue(int data){

    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }

    s1.push(data);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    
}

void Queue::dequeue(){ 
    if(s1.empty()){
        cout<<"Queue is empty"<<endl;
        return;
    }

    s1.pop(); 
}

int Queue::front(){ 
    if(s1.empty()){
        return -1;
    }
    return s1.top(); 
}

int main(){
    Queue q;
    cout<<"When q is empty: "<<q.front()<<endl;
    q.enqueue(4);
    q.enqueue(9);
    q.enqueue(15);
    q.enqueue(1);
    q.enqueue(33);
    q.enqueue(7);

    cout<<"After inserting elements: "<<q.front()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout<<"Element at front is "<<q.front()<<endl;
    return 0;
}



