// Activity selection problem
// We are given an array of activites in pair
// first element in the pair represents start time
// second element represents the end time of the activit
// we have to find the maximum number of activites that can be done 
// such that they do not overlap



#include<bits/stdc++.h>

bool sortActivites(std::pair<int, int> &a, std::pair<int, int> &b)
{
    return a.second < b.second;
}

int activitySelection(int* start, int* end, int n)
{
    int res = 1;
    std::pair<int, int> acts[n];
    for(int i = 0; i < n; i++)
        acts[i] = std::pair<int, int>{start[i], end[i]};    
    std::sort(acts, acts + n, sortActivites);
    int prevEndTime = acts[0].second;
    for(int i = 1; i < n; i++){
        int currStartTime = acts[i].first;     // start time of current activity
        int currEndTime = acts[i].second;
        if(currStartTime >= prevEndTime){
            prevEndTime = currEndTime;
            res++;
        }
        
    }
     
    return res;
}

int main()
{
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        int start[n], end[n];
        for(int i = 0; i < n; i++) std::cin >> start[i];
        for(int i = 0; i < n; i++) std::cin >> end[i];

        std::cout << activitySelection(start, end, n) << std::endl;
    }

    return 0;
}
