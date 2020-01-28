// Search for an element in a matrix which is sorted along the row and 
// col

#include<bits/stdc++.h>
using namespace std;

#define SIZE 30

int search( int n,int m, int x, int mat[SIZE][SIZE])
{
   // Your code here
   int i = 0, j = m-1;
   while( i < n && j >= 0 ){

        if( mat[i][j] == x )
            return 1;
        else if( mat[i][j] < x )
            i++;
        else if( mat[i][j] > x )
            j--;
   }
   return 0;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, m, x;
        cin >> n >> m;
        int a[SIZE][SIZE];
        for( int i = 0; i < n; i++ )
            for( int j = 0; j < m; j++ )
                cin >> a[i][j];
        cin >> x;
        cout << search(n, m, x, a) << "\n";

    }

    return 0;
}
