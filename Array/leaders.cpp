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
        
        int max = a[n-1];
        int i = n - 2;
        cout<< a[n-1] << " ";
        while( i >= 0 ){
            if(a[i] >= max){
                cout << a[i] << " ";
                max = a[i];
            }
            i--;   
        }
        cout << endl;
    }

    return 0;
}
