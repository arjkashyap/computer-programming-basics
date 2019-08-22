#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i = 0; i < t; i++)
        cin>>a[i];
    sort(a, a + t);
    for(int i = 0; i < t; i++){
        for(int j = i+1; j < t; j++){
            if( a[i] < a[j]){
                a[] = 0;
                break;
            }
        }
    }  
    int sum = 0;
    for(int i = 0; i < t; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
