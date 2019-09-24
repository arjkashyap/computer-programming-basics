//Find all the days on which you buy and sell the (from an arr)
//stock so that in between those days your profit is maximum.

#include<iostream>
using namespace std;

void buySell(int arr[], int n){
    int b_idx = -1;         // Index of bought stock
    int i = 0;
    while( i < n ){
        if(arr[i] < arr[i + 1]){
          
            b_idx = i;
            i++;
            break;
        }
        i++;
    }

    // corner case for last index remains
    while( i < n ){
        if( b_idx != -1 && arr[i] > arr[i-1] && arr[i] > arr[i+1] || (b_idx == -1 && i == n - 1 && arr[i] > arr[i - 1])){
            cout << "(" << b_idx << " " << i << ")";
            b_idx = -1;         // Sold
        }
           
        else if ( b_idx == -1 && arr[i] <= arr[i - 1] && arr[i] <= arr[i + 1] ){
            b_idx = i;
        }
        i++;
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        buySell(arr, n);
        cout << endl;
    }
    
    return 0;
}