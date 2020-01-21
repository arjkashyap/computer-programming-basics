// Rotate a matrix counter clockwise by 90 degree

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r = 0, c = 0;
    cout << "Enter the number of rows and cols. \n ";
    cin >> r >> c;
    int mat[r][c] = {0};
    cout << "Enter the elements of the matrix\n";
    for( int i = 0; i < r; i++ ){
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];
    }

    for(int i = r-1; i >= 0; i--){
        for(int j = 0; j < c; j++)
            cout << mat[j][i] << " ";
        cout << "\n";
    }

    return 0;
}
