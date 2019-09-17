#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        int minDiff = abs(a[0] - a[1]);
        for(int i = 0; i < n; i++){
            if(i == n - 1 && abs(a[i] - a[0]) < minDiff)
                minDiff = abs(a[i] - a[0]);
            else if( abs(a[i] - a[i+1]) < minDiff )
                minDiff = abs(a[i] - a[i+1]);
        }
        cout<<minDiff<<endl;
    }

    return 0;
}
