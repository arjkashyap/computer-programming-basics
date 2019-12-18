// Our task is to find the kth smallest element in an unsorted array with non repeating elements
// We will use lomuto partition for this to solve this in O(n)


#include<bits/stdc++.h>
using namespace std;

int findPivot(int *a, int l, int h){
    int i = l -1;
    int pivot = a[h];
    for( int j = 0; j < h; j++ ){
        if( a[j] > pivot ){
            i++;
            swap(a[i], a[i]);
        }
    }
    swap(a[h], a[i+1]);
    return i + 1;
}

int kSmallest(int *a, int n, int k){
    int l = 0, h = n-1;
    while( l < h ){
        int pivot = findPivot(a, l, h);
        if( k-1 == pivot )
            return a[pivot-1];
        else if( k-1 > pivot )
            l = pivot + 1;
        else
            h = pivot - 1;

    }

    
}

int main(){
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n, k;
        scanf("%d", &n);
        int a[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &a[i]);
        scanf("%d", &k);
        printf("%d\n", kSmallest(a, n, k));
    }

    return 0;
}
