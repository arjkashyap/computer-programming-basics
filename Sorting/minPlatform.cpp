// Given the arrival and the departure time of the trains, find min number of platform so that no train has to wait

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    vector<int> v;
    v.push_back(dep[0]);
    for( int i = 1; i < n; i++ ){
        int j = 0;
        bool stationFound = false;
        while(j < v.size()){
            if( v[j] < arr[i] ){
                v[j] = dep[i];
                stationFound = true;
                break;
            }
            j++;
        }
        if(!stationFound){
            v.push_back(dep[i]);
        }
    }
    return v.size();
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        int n = 0;
        cin >> n;
        int arr[n] = {0}, dep[n] = {0};
        for( int i = 0; i < n; i++ )
            cin >> arr[i];
        for( int i = 0; i < n; i++ )
            cin >> dep[i];
        cout << findPlatform(arr, dep, n) << "\n";
    }
    return 0;
}
