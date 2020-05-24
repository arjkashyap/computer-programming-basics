// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void Display(vector<int> A[], int N, int M)
{
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

bool checkMove(int R, int C, int r, int c)
{
    return (r >= 0) && (r < R) && (c >= 0) && (c < C);
}

void exploreIsland(vector<int> A[], int R, int C, int r, int c)
{
    A[r][c] = 0;
    int cMoves[] = {1, 1, 0, -1, -1, -1, 0, -1};
    int rMoves[] = {0, 1, 1, 1, 0, -1, -1, 1};

    for(int i = 0; i < 8; i++){
        if(checkMove(R, C, r + rMoves[i], c + cMoves[i]) == true)
            if(A[r + rMoves[i]][c + cMoves[i]] == 1)
               exploreIsland(A, R, C, r + rMoves[i], c + cMoves[i]);
    }

}

int findIslands(vector<int> A[], int R, int C) 
{
    int count = 0;
    for(int r = 0; r < R; r++){
        for(int c = 0; c < C; c++){
            if(A[r][c]){
                count++;
                exploreIsland(A, R, C, r, c);
            }
        }
    }

    return count;
}

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}
