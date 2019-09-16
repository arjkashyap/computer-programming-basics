#include<iostream>
using namespace std;

int maxOfTwo(int a, int b){
    if(a > b)
        return a;
    return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        for(int i = 0; i < n - 1; i++)
            cout<<maxOfTwo(a[i], a[i+1])<<" ";
        
        cout<<endl;
    }
    return 0;
}
