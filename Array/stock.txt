#include<bits/stdc++.h>
using namespace std;

class Interval{
    public:
        int buy;
        int sell;
};

void stockBuySell(int arr[], int n){
    int count = 0;
    int i = 0;
    Interval stock[n / 2 - 1];
    while ( i < n - 1){
        while( (i < n - 1) && (a[i] <= a[i + 1]) )
            i++;
        if( i == n - 1 )
            break;
        stock[count].buy = i++;
        
        while( (i < n)  && ( a[i] >= a[i - 1] ))
            i++;
        
        stock[count].sell = i - 1;
        
        count ++;
    }
    if( count == 0 )
        return;
    else{
        for( int i = 0; i < n; i++ )
            cout << "(" << stock[i].buy << " " << stock[i].sell << ") ";
    }
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int arr[ n ];
        for( int i = 0; i < n; i++ ) cin >> arr[i];
        stockBuySell(arr, n);
        cout << endl;
    }
    
    return 0;
}