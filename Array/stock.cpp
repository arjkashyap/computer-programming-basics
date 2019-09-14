// Given an array of stock prices maximize the profit

#include<iostream>
using namespace std;

int maxProfit(int a[], int n){
    int localMaxima = 0, localMinima = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 && a[i] < a[i + 1])
            localMinima += a[i];
        else if( i != 0 && i != n-1 && a[i] > a[i+1] && a[i] > a[i-1])
            localMaxima += a[i];
        else if (i != 0 && i != n-1 && a[i] < a[i+1] && a[i] < a[i-1])
            localMinima += a[i];
        else if (i == n-1 && a[i] > a[i-1])
            localMaxima += a[i];
        
    }
    return abs(localMaxima - localMinima);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i ++) cin>>a[i];

        cout<<maxProfit(a, n);
    }
    
    return 0;
}
