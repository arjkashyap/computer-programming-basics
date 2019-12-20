#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n;
        scanf("%d %d", &m, &n);
        int mat[m][n] = {0};
        for( int i = 0; i < m; i++ ){
            for( int j = 0; j < n; j++ )
                scanf("%d", &mat[i][j]);
        }
        
    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < n; j++ ){
            if( mat[i][j] == 1 ){
                int x  = m, y = 0;
                while( y < n ){
                    mat[x][y] = 1;
                    y++;
                }
                continue;
            }
        }
    }
        
    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < n; j++ )
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
