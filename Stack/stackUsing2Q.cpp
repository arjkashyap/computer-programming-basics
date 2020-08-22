// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


void QueueStack :: push(int x)
{
    q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
    if(q1.empty() && q2.empty())
        return -1;
    int p;
    if(q1.empty() == false)
    {
        while(q1.size() > 1)
        {
            int tmp = q1.front();
            q1.pop();
            q2.push(tmp);
        }
        p = q1.front();
        q1.pop();
    }
    else if(q1.empty() == true && q2.empty() == false)
    {
        while(q2.size() > 1)
        {
            int tmp = q2.front();
            q2.pop();
            q1.push(tmp);
        }
        p = q2.front();
        q2.pop();
    }
    
    return p;
}


