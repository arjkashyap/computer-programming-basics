#include<bits/stdc++.h>
using namespace std;

#define SIZE 100

int sum(int *a, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    //cout << "Sum: " << sum << endl;
    return sum;
}

int findMinOpeartion(int matrix[][100], int n)
{
    int maxSum = 0, r = 1, moves = 0;
    for(int i = 0; i < n; i++){
        int rowSum = sum(matrix[i], n);
        if(rowSum > maxSum)
            maxSum = rowSum;
    }
    for(int i = 0; i < n; i++){
        int colSum = 0;
        for(int j = 0; j < n; j++){
            colSum += matrix[j][i];
        }
        if(colSum > maxSum)
            maxSum = colSum;
        
    }
    for(int i = 0; i < n; i++){
        int diff = maxSum - sum(matrix[i], n);
        moves += diff;
    }
    
    return moves;
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[SIZE][SIZE] = {{0}};
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) cin >> a[i][j];
        cout << findMinOpeartion(a, n) << "\n";

    }
    
    return 0;
}
