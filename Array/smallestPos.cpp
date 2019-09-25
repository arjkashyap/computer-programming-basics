#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
    int i = 0;
    bool onePres = false;
    for( int index = 0; index < n; index++ ){
        if( arr[index] == 1)
        {
            onePres = true;
            i = index;
            break;
        }
    }
    
    if( onePres ){
        while( i < n ){

           if ( arr[i] + 1 != arr[i + 1] && arr[i] != arr[i + 1])
                return arr[i] + 1;
            i++;
        }
        return arr[i] + 1;

    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        sort(arr, arr + n);
     
        cout << endl;
        cout << missingNumber(arr, n);
        cout << endl;
    }
    
    return 0;
}