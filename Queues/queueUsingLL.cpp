#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};

void MyQueue:: push(int x)
{
    // empty
    if(front == nullptr)
    {
        front = new QueueNode(x);
        rear = front;
        return;
    }
    
    QueueNode* newNode = new QueueNode(x);
    rear -> next = newNode;
    rear = rear -> next;
}

int MyQueue :: pop()
{
    if(front == nullptr)
        return -1;
    int p = front -> data;
    QueueNode* tmp = front;
    front = front -> next;
    free(tmp);
    return p;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }




