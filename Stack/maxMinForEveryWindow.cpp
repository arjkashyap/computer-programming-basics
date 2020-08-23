// For a given unsorted array, you have to find the maximum of 
// minimum of every Window sizes from 1 to n in the given array

#include<iostream>
#include<stack>
using namespace std;

void display(int* a, int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i <n; i++)
            cin >> arr[i];
        cout << "Input Array: "; 
        display(arr, n);
        // Solution
        // Helper stack to find previous and next greatest
        stack<int> s;
        
        // These arrays store the previous and the next smallest
        // element for every index in the array
        int prev_smallest[n] = {-1};
        int next_smallest[n] = {-1};
        
        // Finding prev smallest
        for(int i = 0; i < n; i++)
        {
            while(s.empty() == false && arr[i] <= arr[s.top()])
                s.pop();
            
            prev_smallest[i] = (s.empty() ) ? -1 : s.top();
            
            s.push(i);
 
        }
        cout << "Prev Smallest: ";
        display(prev_smallest, n);
        while(s.empty() == false)
            s.pop();
        // Finding the next smalles
        cout << "Next smallest: ";
        for(int i = n-1; i >= 0; i--)
        {
            while(s.empty() == false && arr[i] <= arr[s.top()])
                s.pop();
            next_smallest[i] = ( s.empty() ) ? n : s.top();
            s.push(i);
        }

        // printing 
        display(next_smallest, n);
        
        // Finding the window sizes in which each element is smallest
        int wins[n+1] = {0};
        for(int i = 0; i < n; i++)
        {
            int win_len = next_smallest[i] - prev_smallest[i] - 1;
            
            wins[win_len] = max(wins[win_len], arr[i]);
        }
        for(int i = n-1; i>=1; i--)
            wins[i] = max(wins[i], wins[i+1]);
        cout << "win max Elms: "; 
        display(wins + 1, n);

    }

    return 0;
}











