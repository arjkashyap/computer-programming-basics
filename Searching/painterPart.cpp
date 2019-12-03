// Implementation of painter partition problem using binary search
//here are k painters available and each takes 1 unit time to paint 1 unit of board. 
//The problem is to find the minimum time to get this job done under the constraints 
//that any painter will only paint continuous sections of boards

#include<bits/stdc++.h>
using namespace std;


int sumArr(int *a, int n){
    int sum = 0;
    for( int i = 0; i < n; i++ )
        sum += a[i];
    return sum;
}

int findMinPainters(int *a, int n, int k){
    int painters = 1, sum = 0;
    for( int i = 0; i < n; i ++ ){
        sum += a[i];
        if( sum > k){
            sum = a[i];
            painters++;
        }
    }
    return painters;
}

int maxTime(int *a, int n, int k){
    sort(a, a+n);
    int l = a[n-1];
    int h = sumArr(a, n);
    
    while(l < h){
        int mid = (l + h)/ 2;
        
        int painters = findMinPainters(a, n, mid);
        
        if( painters <= k  )
            h = mid;
        else
            l = mid + 1;
    }
    return l;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d", &n);
        int arr[n];
        for( int i = 0; i < n; i++) scanf("%d", &arr[i]);
        scanf("%d", &k);
        printf("%d\n", maxTime(arr, n, k));
    }

    return 0;
}
