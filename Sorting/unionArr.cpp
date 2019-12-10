// Union of two sorted arrays

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void Union( int *A, int *B, int nA, int nB ){
    vector< int > V;
    int i = 0, j = 0;
    while( i < nA && j < nB ){
       if( A[i] == A[i+1] ) i++;
       if ( A[j] == A[j+1] ) j++;
       else if( A[i] < B[j] ) V.push_back(A[i++]);
       else if( A[i] >= B[j] ) V.push_back(B[j++]);
    }

    for(auto ptr = V.begin(); ptr != V.end();  ptr++)
        printf("%d ", *ptr);
    printf("\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int nA, nB;
        scanf("%d", &nA);
        int A[nA];
        for( int i = 0; i < nA; i++ ) scanf("%d", &A[i]);
        scanf("%d", &nB);
        int B[nB];
        for( int i = 0; i < nB; i++ ) scanf("%d", &B[i]);
        Union(A, B, nA, nB);
    }

    return 0;
}
