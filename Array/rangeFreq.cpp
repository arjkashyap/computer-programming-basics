// TO find the maximum occuring element in the array of ranges

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

int maxOccured(int L[], int R[], int n, int maxx){
    int tmp[MAX];
    
    // This funcion copies the mid element to all the index of tmp
    memset(tmp, 0, sizeof tmp);    
    
    int maxInd = -1;
    for(int i = 0; i < n; i++)
    {
        tmp[L[i]] += 1;
        tmp[R[i]+ 1] -= 1;
        if( R[i] > maxInd )
            maxInd = R[i];
    }

    // Prefix sum 
    int max = tmp[0], index;
    for(int i = 1; i < maxInd + 1; i ++ ){
        tmp[i] += tmp[i - 1];
        if ( max <  tmp[i] ){
            max = tmp[i];
            index = i; 
        }
    }
    return index;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        int L[n];
        int R[n];
        for(int i = 0; i < n; i++) cin >> L[i] ;
        for(int i = 0; i < n; i++ ) cin >> R[i];
        cout << maxOccured(L, R, n, 12);
        cout << endl;
    }
    
    return 0;
}
