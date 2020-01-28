// Reverse row in a matrix

#include<bits/stdc++.h>
using namespace std;

#define SIZE 30

void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE])
{
    for( int i = 0; i < n1/2; i++ ){
        for( int j = 0; j < m1; j++ )
            swap(arr1[i][j], arr1[n1 - i - 1][j]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int arr[SIZE][SIZE];
        for( int i = 0; i < n; i++ )
            for( int j = 0; j < m; j++ ) 
                cin >> arr[i][j];
        interchangeRows(n, m, arr);
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < m; j++ )
                cout << arr[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}
