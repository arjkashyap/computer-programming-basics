// Sorting using sort function for structs
#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x, y;
};

void display(int *arr){
    for( auto p : arr )
        printf(" %d %d,  ", p.x,  p.y);
        printf("\n");
}

bool compare(Point p1, Point p2){ return ( p1.x > p2.y ); }

int main(){
    Point arr[] = { {3, 8}, {2, 10}, {5, 4} };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array: \n");
    display(arr);

    sort( arr, arr + n, compare );
    printf("After using sort: \n");
    display(arr);

    return 0;
}
