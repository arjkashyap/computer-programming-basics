// Given an array of +ve and -ve values
// Arrange the array such the these values appear together
// ex: -1 -3 -4 1 9 3

#include<bits/stdc++.h>
using namespace std;

void Display( int *a, int n )
{
    for( int i = 0; i < n; i++ ) printf("%d ", a[i]);
    printf("\n");
}

void arrange( int *a, int n )
{
    int low = 0, high = n - 1;
    while( low < high ){
        printf("low: %d high %d\n", a[low], a[high]);
        if( a[low] > 0 && a[high] < 0 ){
            swap(a[low], a[high]);
            low ++;
            high --;
        }
        else if ( a[low] < 0 && a[high] < 0 || ( a[low] == a[high] && a[low] < 0 )){
            low++;
        }
        else if( a[low] > 0 && a[high] > 0 || (a[low] == a[high] && a[low] >  0)){
            high--;
        }

        else if( a[low] == 0 )
             low++;
        else
            high--;
            
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while( t-- ){
        int n;
        scanf("%d", &n);
        int a[n];
        for( int i = 0; i < n; i++ ) scanf("%d", &a[i]);
        arrange(a, n);
        Display(a, n);
    }

    return 0;
}
