// Contig days just before it which have values smaller or same
// is knonw as span of a stack

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> calculateSpan(int* a, int n)
{
    vector<int> res;
    stack<int> s;
    for(int i = 0; i < n; i++)
    {
        while(s.empty() == false && a[i] > a[s.top()])
        {
            int tp = s.top();
            s.pop();
        }
        cout << (s.empty() ? i + 1 : i - s.top() ) << " "; 
        s.push(i);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n; 
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> spans = calculateSpan(a, n);
        for(auto x : spans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
