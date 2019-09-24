#include<bits/stdc++.h>
using namespace std;

class Interval{
    public:
        int buy;
        int sell;
};

void stockBuySell(int price[], int n){
    int count = 0;
    int i = 0;
    Interval stock[n / 2 + 1];
    while ( i < n - 1){
        while( (i < n - 1) && (price[i+1] <= price[i]) )
            i++;
        if( i == n - 1 )
            break;
        stock[count].buy = i++;
        
        while( (i < n)  && ( price[i] >= price[i - 1] ))
            i++;
        
        stock[count].sell = i - 1;
        
        count ++;
    }
    if( count == 0 )
        return;
    else{
        for( int i = 0; i < count ; i++ )
            cout << "(" << stock[i].buy << " " << stock[i].sell << ") ";
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int price[ n ];
        for( int i = 0; i < n; i++ ) cin >> price[i];
        stockBuySell(price, n);
        cout << endl;
    }
    
    return 0;
}