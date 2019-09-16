// Print M, N bonacci numbers using sliding window

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>m>>n;
        int a[m] = { 0 };
        a[n-1] = 1;
        a[n] = 1;

        for(int i = n + 1; i < m; i++)
            a[i] = 2*a[i -1] - a[i - n - 1];
        
        for(int i = 0; i < m; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        int x;
        cout<<x<<endl;
        int y = 0;
        cout<<y<<endl;
    }
    
    return 0;
}
