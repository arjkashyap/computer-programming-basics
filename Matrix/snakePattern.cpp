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
         while(i % 2 == 0 && j < c){
            cout << mat[i][j] << " ";
            j++;
         }
         j = c - 1;
        while(i % 2 != 0 && j >= 0){
            cout << mat[i][j] << " ";
            j--;
        }
        j = 0;
        i++;    
    }
    cout << "\n";
    return 0;
}
