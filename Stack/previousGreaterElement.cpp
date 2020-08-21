// Given an array of dist integers, find the closest (pos wise) greator on 
// left of every elelment.
// If no greater element on left then print -1

#include<iostream>
#include<stack>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            std::cin >> a[i];
        // Alogo//
        std::stack<int> s;
        std::cout << -1 << " ";
        for(int i = 1; i < n; i++)
        {
            while(s.empty() == false && s.top() <= a[i])
                s.pop();
            int leftGreatest = s.empty() ? -1 : s.top();
            std::cout << leftGreatest << " ";
            s.push(a[i]);
            
        }
    }
    return 0;
}
