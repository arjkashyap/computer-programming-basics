// Write a program to get the transpose of a given matrix

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r = 0, c = 0;
    cout << "Enter the number of rows and cols in matrix\n";
    cin >> r >> c;
    
    int mat[r][c] = {0};

    cout << "Enter the elements of the matrix \n";
    
    for( int i = 0; i < r ; i++ ){
        for( int j = 0; j < c; j++ )
            cin >> mat[i][j];
    }

    cout << "Transpose: \n";
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++)
            cout << mat[j][i] << " " ;
        cout << "\n";
    }

    return 0;
}
