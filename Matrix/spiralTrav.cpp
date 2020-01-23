// Print a spiral traversal of the matrix

#include<bits/stdc++.h>
using namespace std;

#define SIZE 30

void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    // dir:
    // l - 0, d - 1, r - 2, l - 3
    int t = 0, b = m - 1, l = 0, r = n - 1;
    int dir = 0;
    while(t <= b && l <= r){
        if( dir == 0 ){
            for( int i = l; i <= r; i++ )
                cout << ar[t][i] << " ";
            t++; dir = 1;
        }
        else if( dir == 1 ){
            for( int i = t; i <= b; i++ )
                cout << ar[i][r] << " ";
            r--; dir = 2;
        }
        else if( dir == 2 ){
            for( int i = r; i >= l; i-- )
                cout << ar[b][i] << " ";
            b--; dir = 3;
        }
        else if ( dir == 3 ){
            for( int i = b; i >= t; i-- )
                cout << ar[i][l] << " ";
            l++; dir = 0;
        }
        
    }

}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int arr[SIZE][SIZE] = {{0}};
        int i = 0;
        int j = 0;
        int row = 0;
        int col = 0;
        for(i = 0; i < m; i++){
            for( j = 0; j < n; j++ )
                cin >> arr[i][j];
        }

        spirallyTraverse(m, n, arr);
        cout << "\n";
    }

    return 0;
}
