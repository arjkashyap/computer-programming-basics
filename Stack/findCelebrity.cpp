// For a given matrix which represents if ith row knows jth col, 
// Find the celeb here
// celeb is the one who does not know anyone and is known by all

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
       int M[n][n];
       for(int i = 0; i < n; i++)
           for(int j = 0; j < n; j++)
                cin >> M[i][j];
       // Solution
       stack<int> s;
       for(int i = 0; i < n; i++)
            s.push(i);

       while(s.size() > 1)
       {
            int p1 = s.top();
            s.pop();
            int p2 = s.top();
            s.pop();
            // A does not knows B then A cant be celeb
            if(M[p1][p2] == 1)
                s.push(p2);
       
            else if(M[p2][p1] == 1)
                s.push(p1);
       }
       if(s.empty())
            cout << -1;
       else 
            cout << s.top();
       cout << endl;
    }
    return 0;
}







