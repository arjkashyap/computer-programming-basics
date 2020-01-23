// Desplay the sum of the upper and the lower half of the traingle

#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

void sumtraingles( int n, int mat[SIZE][SIZE])
{
    int sumLower = 0, sumUpper = 0;
   for( int i = 0; i < n; i++ ){
        for( int j = 0; j <= i; j++ )
            sumLower += mat[i][j];
   }
   
   for( int i = n-1; i >= 0; i-- ){
        for( int j = n - 1; j >= i ; j-- )
            sumUpper += mat[i][j];
   }
    cout << sumUpper << " " << sumLower << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int mat[n][n] = {{0}};
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < n; j++ )
                cin >> mat[i][j];
        }
        sumtraingles(n, mat);
    }

    return 0;
}
