#include<bits/stdc++.h>
using namespace std;

#define SIZE 200

void sumMatrix(int n1, int m1, int n2, int m2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){
    
    if(n1 == n2 && m1 == m2){
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m1; j++)
                cout << arr1[i][j] + arr2[i][j] << " ";
            cout << "\n";
        }
    }
    else{
        cout << -1 << "\n";
    }

}


int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int c1, r1, c2, r2;
        cout << "Enter the number of rows and cols in mat 1\n";
        cin >> r1 >> c1;
        int mat1[r1][c1];
        cout << "Enter the elements of the matrix 1\n";
        for( int i = 0; i < r1; i++ ){
            for( int j = 0; j < c1; j++ )
                cin >> mat1[i][j];
        }
        cout << "Enter the numer of rows and cols in mat 2\n";
        cin >> r2 >> c2;
        int mat2[r2][c2];
        cout << "Enter the elements of the mat 2\n";
        for( int i = 0; i < r2; i++ ){
            for( int j = 0; j < c2; j++ )
                cin >> mat2[i][j];
        }
        sumMatrix(r1, c1, r2, c2, mat1, mat2);
    }

    return 0;
}
