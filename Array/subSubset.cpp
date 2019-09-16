// Given an unsorted array, find if there is a subarray with the sum equals to s;

#include<iostream>
using namespace std;

bool sumPresent(int a[], int n, int sum){
    int curr_sum = a[0], s = 0;

    for(int e = 1; e < n; e++){
        
        // clean current window
        while( curr_sum > sum && s < e - 1){
            curr_sum -= a[s]; s++;
        }

        if( curr_sum == sum )
            return true;
            
        curr_sum += a[e];
    }
    return (curr_sum == sum);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        
        if(sumPresent(a, n, s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
