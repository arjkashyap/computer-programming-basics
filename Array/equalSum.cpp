// Check if the given array can be devided into three parts with 
// equal sum

#include<iostream>
using namespace std;

bool checkSum(int a[], int n){
    int sum = a[i];
    for( int i = 1; i < n; i++)
        a[i] += a[i -1];
    int i = 2;
    while( i < n ){
        if(a[i] != a[i + 2] - a[i + 2 -])
            return false;
        i += 2;
    }

}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i ++) cin>>a[i];

        if(checkSum(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
