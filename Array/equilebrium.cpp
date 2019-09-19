#include<iostream>
using namespace std;

int eqPoint(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    int l_sum = 0;
    for(int i = 0; i < n; i++){
        if( l_sum == sum - a[i] )
            return i+1;
        l_sum += a[i];
        sum -= a[i];
    }
    return -1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
       
        cout<<eqPoint(a, n)<<endl;
    }
    
    return 0;
}
