#include<iostream>
#include<utility>
#include<algorithm>

bool comp(std::pair<int, int> j1, std::pair<int, int> j2)
{
    if(j1.first == j2.first)
        return j1.second >= j2.second;
    return j1.first <= j2.first;
}

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        std::pair<int, int> a[n];
        for(int i = 0; i < n; i++)
        {
           int dl, p;
           std::cin >> dl >> p;
           a[i] = std::pair<int, int>{dl, p};
        }
        std::sort(a, a+n, comp);
        int maxDL = a[n-1].first;
        int sc[maxDL] = {0};
        int scIndex = 0;
        int profit = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i].first > scIndex)
            {
                sc[scIndex] += a[i].second;
                scIndex++;
            }
        }
        for(int i = 0; i < maxDL; i++)
            profit += sc[i];
        std::cout << profit << std::endl;
    }
    return 0;
}

