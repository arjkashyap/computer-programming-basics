// Matrix rotation by 90 degree by swaping elements 

#include<bits/stdc++.h>
using namespace std;

#define N 50

void rotateby90(int n, int a[][N]){
     
    // Transpose
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j <= i; j++ )
            swap(a[i][j], a[j][i]);
    }

    // Reverse col
    for( int i = 0; i < n/2; i++ ){
        for(int j = 0; j < n; j++){
            swap(a[i][j], a[n - i - 1][j]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[N][N] = {0};
        for( int i = 0; i < n; i++ )
            for( int j = 0; j < n ; j++ )
                cin >> a[i][j];
        
        rotateby90(n, a);
        cout << "\n";
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < n ; j++ )
                cout << a[i][j] << " ";
            cout << "\n";
        }

    }

    return 0;
}
