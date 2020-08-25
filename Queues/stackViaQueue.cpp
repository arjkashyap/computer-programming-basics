// Implementing stack through queues
// We will be using oops for this program

#include<iostream>
#include<queue>
using namespace std;

class Stack{
    queue<int> q;
    public:
        void push( int );
        void pop();
        int top();
};

// Inserting element via queue
void Stack::push(int a){
    if(q.empty()){
        q.push(a);
        return;
    }
    
    q.push(a);
    int n = q.size();
    // Take the last element a to the front
    for(int i = 0; i < n; i++){
      // pop the front element from the first and push
      // it to the last
        q.push(q.front());
        q.pop();
    }

}

// Pop the first element
void Stack::pop(){ q.pop();}

// display the top element of the stack
int Stack::top(){
    if(q.empty()){ 
        cout<<"Stack is empty"<<endl;
        return 0;
    }
   return q.front(); 
}


int main(){
    Stack S;
    S.push(5);
    S.push(9);
    S.push(10);
    cout<< S.top()<<endl;
    S.pop();
    S.pop();
    cout<<S.top()<<endl;
    return 0;
}










