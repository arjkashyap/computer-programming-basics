// we have to determine what is the minimum time required to rot all oranges
// 0 -> Empty cell
// 1 -> Fresh Orange
// 2 -. Rot

#include<bits/stdc++.h>

#define SIZE 100
const int moves = 4;
const int rMoves[] = {-1, 0, 1, 0};
const int cMoves[] = {0, 1, 0, -1};


int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--)
    {
        int R, C;
        std::cin >> R >> C;
        int A[SIZE][SIZE] = {-1};
        for(int r = 0; r < R; r++)
            for(int c = 0; c < C;  c++)
                std::cin >> A[r][c];
        
        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++)
                std::cout << A[r][c] << " ";
            std::cout << "\n";
        }
        std::queue<std::pair<int, int>> q;

        // Push all the rotten oranges into queue
        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++){
                if(A[r][c] == 2)
                    q.push({r, c});
            }
        }
        // Push delimeter
        q.push({-1, -1});

        int time = 0;
        while(q.empty() == false){
            while( q.front().first != -1 && q.front().second != -1){
                int r = q.front().first;
                int c  = q.front().second;
            //    std::queue<std::pair<int, int>> tmp;
             //   tmp = q;
            //    while(tmp.empty() == false)
            //    {
            //        std::cout << tmp.front().first << " " << tmp.front().second << " ";
            //        tmp.pop();
            //    }
            //    std::cout << std::endl;
                q.pop();
                for(int k = 0; k < moves; k++){
                    int newR = r + rMoves[k];       // Adjacent row
                    int newC = c + cMoves[k];       // Adjacent col
                    if( newR >= 0 && newR < R && newC >= 0 && newC < C && A[newR][newC] == 1){
                        //std::cout << newR << " " << newC << std::endl;
                        q.push({newR, newC});
                        A[newR][newC] = 2;
                   }
                }
            }
            q.pop();
            time++;
            if(!q.empty())
                q.push({-1, -1});
        }
        std::cout << "time ";
        std::cout << time << "\n";
    }

    return 0;
}




