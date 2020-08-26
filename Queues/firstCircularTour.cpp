// Given an array of petrol pump quants and distance to the next one
// Find the starting point in a circular array from where we can cover a cirul
// ar distance

#include<iostream>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump p[], int n)
{
    int start = 0;
    int curr_pet = 0;
    int prev_pet = 0;
    for(int i = 0; i < n; i++)
    {
        curr_pet += p[i].petrol - p[i].distance;
        if(curr_pet < 0)
        {
            prev_pet += curr_pet;
            curr_pet = 0;
            start = i + 1;
        }
    }
    return (curr_pet + prev_pet) >= 0 ? start  : -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        petrolPump p[n];
        for(int i = 0; i< n; i++)
            cin >> p[i].petrol >> p[i].distance;
        cout << tour(p, n) << endl;
    }
    return 0;
}


