#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

void exchangeColumns(int n1, int m1, int arr1[SIZE][SIZE])
{
    int i = 0, j = 0;
    while(i < n1){
        swap(arr1[i][j], arr1[i][m1 - 1]);
        i++;
    }
        for(i = 0; i < n1; i++){
        for( j = 0; j < m1; j++ )
            cout << arr1[i][j] << " ";
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
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                cin >> a[i][j];
        exchangeColumns(r, c, a);
        cout << "\n";
    }

    return 0;
}
