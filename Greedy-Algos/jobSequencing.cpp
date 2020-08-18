// An array of jobs which give us deadline and profit
// Maximize the profit

#include<iostream>

struct Job
{
    int dl;
    int pf;
    Job(int d, int p)
    {
        this -> dl = d;
        this -> pf = p;
    }
};

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        Job arr[n];
        for(int i = 0; i < n; i++)
        {
            int deadline, profit;
            std::cin >> deadline, profit;
            arr[i] = new Job(deadline, profit);
        }

    }

    return 0;
}


