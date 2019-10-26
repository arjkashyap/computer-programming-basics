// Hights of the roof tops are given in an array fomat
// Find the max number of steps you can take for gaining altitude

#include<bits/stdc++.h>
using namespace std;

int maxStep( int arr[], int n ){

    int max_steps = 0;
    for( int i = 0; i < n; i++ ){
        int steps = 0;
        while( ( arr[i] ) > arr[i-1] && i < n && i != 0 ){
            steps++;
            i++;
        }

        if( steps > max_steps )
            max_steps = steps;
    }   
    return max_steps;
}
int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        cout << maxStep( arr, n ) << endl;
    }

    return 0;
}
