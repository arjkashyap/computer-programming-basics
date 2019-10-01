// Find the square root of a long long number
// Without using the liberary function

#include<bits/stdc++.h>
using namespace std;

long long int binSearch(int l, int h, int s){
    long long int mid = (l + h ) / 2;
   // cout << l << " " << h << " " << mid << endl;
    
    if(l > h)
        return l-1;
    
    if( mid*mid == s )
        return mid;
    if( mid*mid > s )
        binSearch(l, mid-1, s);
    else
        binSearch(mid + 1, h, s);
}

long long int floorSqrt(long long int x) 
{
    if(x == 0)
        return x;
    int i = 1;
    while(i*i <= x)
        i *= 2;
     
    if(i*i == x)
        return i;

    return binSearch(i/2, i, x);
        
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int n;
        scanf("%lli", &n);
        printf("%lli\n", floorSqrt(n));
    }

    return 0;
}
