// Print snake pattern in a given matrix

#include<bits/stdc++.h>
using namespace std;

int main()
{      
    ios::sync_with_stdio(false);
    int r = 0, c = 0;
    cout << "Enter the number of rows and cols: \n";
    cin >> r >> c;
    int mat[r][c] = {0};
    for(int i = 0; i < r ; i++){
        for(int j = 0; j < c; j++)
            cin >> mat[i][j];
   }
    int i = 0, j = 0;
    while(i < r){
        while(j < c && i < r){
            cout << mat[i][j] << " ";
            j++;
        }
        j = c - 1;
        i++;
        while( j >= 0 && i < r ){
            cout << mat[i][j] << " " ;
            j--;
        }
        i++;
        j = 0;
    }
    cout << "\n";
    return 0;
}
