//Given a Matrix containing 0s and 1s. Find the unit area of
// the largest region of 1s


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


 // } Driver Code Ends

const int X[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int Y[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int moves = 8;

bool checkMove(int A[SIZE][SIZE], int R, int C, int r, int c)
{
    if(r >= 0 && r < R && c >= 0 && c < C)
        return A[r][c] == 1;
    return false;
}

void dfsWalk(int A[SIZE][SIZE], int R, int C, int y, int x, int *area)
{
    *area = *area + 1;
    A[y][x] = 0;
    for(int i = 0; i < moves; i++){
        if(checkMove(A, R, C, y + Y[i], x + X[i]))
            dfsWalk(A, R, C, y + Y[i], x + X[i], area);
    }
}

int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{
    int maxArea = 0;
    for(int r = 0; r < N; r++){
        for(int c = 0; c < M; c++){
            if(A[r][c] == 1){
                int localArea = 0;
                dfsWalk(A, N, M, r, c, &localArea);
                maxArea = max(maxArea, localArea);
            }
        }
    }
    return maxArea;
}

void display(int A[SIZE][SIZE], int R, int C)
{
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++)
            std::cout << A[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int g[SIZE][SIZE];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];
        cout << findMaxArea(n, m, g) << endl;
        display(g, n, m);
    }

    return 0;
}
