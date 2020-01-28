// We have to reverse the columns of the matrix

#include<bits/stdc++.h>
using namespace std;

#define SIZE 50

void reverseCol(int n1, int m1, int arr1[SIZE][SIZE])
{
    for(int i = 0; i < n1; i++){
        for( int j = 0; j < m1/2; j++ )
            swap(arr1[i][j], arr1[i][m1 - j - 1]);
    }
}

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        ios::sync_with_stdio(false);
        int n, m;
        cin >> n >> m;
        int arr[SIZE][SIZE];
        for( int i = 0; i < n; i++ )
            for( int j = 0; j < m; j++ )
                cin >> arr[i][j];
        reverseCol(n, m, arr);
        for( int i = 0; i < n; i++){
            for( int j = 0; j < m; j++ )
                cout << arr[i][j] << " ";
            cout << "\n";
        }

    }

    return 0;
}
