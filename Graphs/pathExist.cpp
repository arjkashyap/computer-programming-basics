// Given a matrix, find if the path from source to destination exists or not
// 0 -> WALL
// 1 -> SOURCE
// 2 -> DESTINATION
// 3 -> BLANK

#include<bits/stdc++.h>

#define SIZE 20

const int xMoves[] = {1, 0, -1, 0};
const int yMoves[] = {0, 1, 0, -1};

bool checkMove(int A[SIZE][SIZE], int N, int x, int y, bool vis[SIZE][SIZE])
{
    if( (A[y][x] != 0) && (!vis[y][x]))
        return (((x >= 0) && (x < N)) && ((y >= 0) && (y < N)));
    return false;
}

bool explore(int A[SIZE][SIZE], int N, int x, int y,bool vis[SIZE][SIZE])
{
    if(A[y][x] == 2)
        return true;
    vis[y][x] = true;
    bool flag = false;
    for(int i = 0; i < 4; i++){
        if(checkMove(A, N, x + xMoves[i], y + yMoves[i], vis))
            flag = flag || explore(A, N, x + xMoves[i], y + yMoves[i], vis);
    }
    return flag;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        int N;
        int A[SIZE][SIZE] = {{-1}};
        bool vis[SIZE][SIZE];
        for(int i = 0; i < SIZE; i++)
            for(int j = 0; j < SIZE; j++)
                vis[i][j] = false;

        int sx, sy; // source co-ordinates
        std::cin >> N;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                int x;
                std::cin >> x;
                if(x == 1){
                    sx = j;
                    sy = i;
                }
                A[i][j] = x;
            }
        }
        std::cout << explore(A, N, sx, sy, vis) << "\n";
    }

    return 0;
}
