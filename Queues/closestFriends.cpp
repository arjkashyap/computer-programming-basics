#include<iostream>
#include<stack>
using namespace std;
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
        stack<int> s;
        for(int i = 0; i < n; i++)
        {
            while(s.empty() == false && a[i] <= a[s.top()])
                s.pop();

            cout << (s.empty() ? -1 : s.top()) << " ";
            s.push(i);
        }
        cout << endl;
    }
	return 0;
}