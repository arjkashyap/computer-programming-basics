// Find the maximum sum of k consecutive integers in an array
// Using sliding window technique

#include<iostream>
using namespace std;

int maxSum(int a[], int n, int k){
    int currSum = 0, max = 0;

    for(int i = 0; i < k; i++)
        currSum += a[i];
    max = currSum;
    for(int i = k; i < n; i++){
        currSum += a[i] - a[i - k];
        if(currSum > max)
            max = currSum;
    }
    return max;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n, k;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        cin>>k;

        cout<<maxSum(a, n, k)<<endl;
    }

    return 0;
}
