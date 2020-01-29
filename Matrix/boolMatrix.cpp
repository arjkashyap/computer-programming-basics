// Modify the matrix such that if the a cell is 1, make ith row and jth col equal to 1

#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

void booleanMatrix(int r, int c, int a[SIZE][SIZE])
{
    int row[r] = {0}, col[c] = {0};
    for(int i =0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 1){
                row[i] = 1; col[j] = 1;
            }
        }
    }
    
    for(int i = 0; i < r; i++){
        for( int j = 0; j < c; j++ ){
            if(row[i] == 1 || col[j] == 1)
                a[i][j] = 1;
        }
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
        int a[SIZE][SIZE];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++)
                cin >> a[i][j];
        }
        booleanMatrix(r, c, a);
        
    }
    

    return 0;
}
