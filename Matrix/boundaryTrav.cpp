// Boundry traversal of a matrix

#include<bits/stdc++.h>
using namespace std;

# define SIZE 50

void boundaryTraversal(int n1, int m1, int arr[SIZE][SIZE])
{
    int i = 0;
    if( n1 == 1 )
        while(i <= m1) cout << arr[0][i++] << " ";
    else if( m1 == 1 )
        while(i <= n1) cout << arr[i++][0] << " ";
    else{
        for( int index = 0; index < m1; index++ )
            cout << arr[0][index] << " ";
        for( int index = 1; index < n1; index++ )
            cout << arr[index][m1-1] << " ";
        for( int index = m1 - 2; index >= 0; index-- )
            cout << arr[n1-1][index] << " ";
        for( int index = n1 - 2; index > 0; index--)
            cout << arr[index][0] << " ";
    
    }

}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int r, c;
        cin >> r >> c;   
        int a[SIZE][SIZE] = {{0}};
        for( int i = 0; i < r; i++ )
            for( int j = 0; j < c; j++ ) cin >> a[i][j];
        
        boundaryTraversal(r, c, a);
        cout << "\n";
    }
    return 0;
}
