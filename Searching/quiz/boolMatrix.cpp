// You are given a matrix Mat of m rows and n columns. The matrix is boolean so the elements of the matrix can only be either 0 or 1.
// Now, if any row of the matrix contains a 1, then you need to fill that whole row with 1. After doing the mentioned operation, you need to print the modified matrix.

#include<bits/stdc++.h>
using namespace std;

bool checkRow( int arr[], int n ){
    sort(arr, arr + n);
    if( arr[n - 1] == 1){
        cout << "yoooo " << endl;;
        return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        int matrix[m][n];
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ )
                cin >> matrix[i][j];
        }
    
        for( int i = 0; i < m; i ++ ){
            if( checkRow( matrix[i], n ) ){
                cout << "yep : " << i << endl;
                for( int j = 0; j < n; j++ ){
                    if( matrix[i][j] == 0 )
                        matrix[i][j] = 1;
                }
            }
            cout << "nah" < <endl;
        }
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ )
                cout << matrix[i][j] << " ";
            cout << endl; 
        }
    }
   
    return 0;
}
