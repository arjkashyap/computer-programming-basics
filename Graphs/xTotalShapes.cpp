/*
 * Given N * M string array of O's and X's. The task is to find 
 * the number of 'X' total shapes. 'X' shape consists of one or 
 * more adjacent X's
 */

#include<bits/stdc++.h>
#define SIZE 50

const int X[] = {0, 1, 0, -1};
const int Y[] = {-1, 0, 1, 0};

// r -> y
// c -> x

bool checkMove(char A[SIZE][SIZE], int R, int C, int r, int c)
{
    if(r < R && r >= 0 && c < C && c >= 0 && A[r][c] == 'X'){
        return true;;
    }
    return false;
}

void walkDfs(char A[SIZE][SIZE], int R, int C, int y, int x)
{
    A[y][x] = 'O';
    for(int i = 0; i < 4; i++){
        if(checkMove(A, R, C, y + Y[i], x + X[i])){
            walkDfs(A, R, C ,y + Y[i], x + X[i]);
        }
    }

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        int r, c, count = 0;
        std::cin >> r >> c;
        char A[SIZE][SIZE];
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                std::cin >> A[i][j];

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(A[i][j] == 'X'){
                    count ++;
                    walkDfs(A, r, c, i, j);
                }
            }
        }
        std::cout << cout << "\n";
    }
    return 0;
}
