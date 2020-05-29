//Given a square chessboard of N x N size, the position of Knight 
//and position of a target is given. We need to find out minimum 
//steps a Knight will take to reach the target position

#include<bits/stdc++.h>

#define SIZE 20

// -1 => visited
// 0 => empty square
// 1 => knight
// 2 => target

// Every possible move for a knight
const int moves = 8;
const int R[] = {-2, -2, 2, 2, -1, -1, 1, 1};
const int C[] = {-1, 1, -1, 1, -2, 2, -2, 2};

// r -> y
// c -> x

bool checkMove(int A[SIZE][SIZE], int N, int r, int c)
{
    if(r >= 0 && r < N && c >= 0 && c < N)
        return A[r][c] != -1;
    return false;
}

void Disp(int A[SIZE][SIZE], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            std::cout << A[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int knightSteps(int A[SIZE][SIZE], int N, int ky, int kx, int ty, int tx)
{
    if(ky == ty && kx == ky)
        return 0;
    std::queue<std::pair<int, int>> pos;
    pos.push({ky, kx});
    A[ky][kx] = -1;
    int Dist[SIZE][SIZE] = {0};
    while(pos.empty() == false){
        int r = pos.front().first;
        int c = pos.front().second;
        A[r][c] = -1;
        pos.pop();

        for(int k = 0; k < moves; k++){
            int newR = r + R[k];
            int newC = c + C[k];
            if(checkMove(A, N, newR, newC)){
                pos.push({newR, newC});
                Dist[newR][newC] = Dist[r][c] + 1;
                if(A[newR][newC] == 2){
                    return Dist[newR][newC];
                }
            }
        }
    }
    return -1;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        int N;
        int kx, ky, tx, ty;
        std::cin >> N;
        int A[SIZE][SIZE] = {0};
        std::cin >> kx >> ky;
        kx--;
        ky--;
        A[ky][kx] = 1;
        std::cin >> tx >> ty;
        tx--;
        ty--;
        A[ty][tx] = 2;
        std::cout << knightSteps(A, N, ky, kx, ty, tx) << "\n";
    }
    return 0;
}
