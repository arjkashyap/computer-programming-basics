// Find the transpose of a matrix by interchanging element positions

#include<bits/stdc++.h>
using namespace std;

#define N 30

void transpose( int A[N][N], int n)
{
    for(int i = 0; i < n; i++){
        for( int j = 0; j <= i; j++ )
            swap(A[i][j], A[j][i]);
    }

}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[N][N] = {0};
        for( int i = 0; i < n; i++ )
            for( int j = 0; j < n ;j++ )
                cin >> A[i][j];
        
        transpose(A, n);

        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < n ;j++ )
                cout << A[i][j] << " ";
            cout << "\n";   
        }

    }
    return 0;
}
