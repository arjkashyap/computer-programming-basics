// sort the stack in ascending order

#include<bits/stdc++.h>
using namespace std;

bool checkStack(stack<int> s, int* arr, int n)
{
    sort(arr, arr+n);
    int i = 0;
    while(s.empty() == false){
        int tp = s.top();
        s.pop();
        cout << tp << " ";
        if(arr[i] != tp)
            return false;
        i++;
    }
    cout << endl;
    return true;
}

void sortStack(stack<int>& s)
{
    priority_queue<int> pq;     // maxheap
    while(s.empty() == false){
        int tp = s.top();
        s.pop();
        pq.push(tp);
    }
    while(pq.empty() == false){
        int tp = pq.top();
        s.push(tp);
        pq.pop();
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    stack<int> st;
    for(int i = 0; i < n; i++)
        st.push(arr[i]);

    sortStack(st);
    bool correct = checkStack(st, arr, n);
    if(correct)
        cout << "Correct";
    else
        cout << "In-Correct";
    cout << endl;
    return 0;
}
