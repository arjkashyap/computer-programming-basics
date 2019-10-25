#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 10000

void disp( int arr[], int n ){
    for( int i = 0; i < n; i++ ) cout << arr[i] << " ";
    cout << endl;
}

void twoRepeated( int arr[], int n ){
    int tmp[n] = {0};
    for( int i = 0; i < n ; i++ ){
        tmp[ arr[i] ]++;
        if( tmp[arr[i]] > 1 )
            cout << arr[i] << " ";
        
    }
    cout << endl;
}


int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        n += 2;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];

        twoRepeated( arr, n );
    }

    return 0;
}
