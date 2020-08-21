// Implementing Stack using linked List

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}
// } Driver Code Ends


void MyStack ::push(int x) 
{
    // Empty stack
    if(top == nullptr)
    {
        top = new StackNode(x);
        return;
    }
    StackNode* newNode = new StackNode(x);
    newNode -> next = top;
    top = newNode;
        
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() 
{
    if(top == nullptr)
        return -1;
    StackNode* tmp = top;
    top = top -> next;
    return tmp -> data;
}





