// Sorting an array by using sort function from STL

#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for( int i = 0; i < n; i++ ) printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {2, 1, 44, 23, 9, 17, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The array is : \n");
    
    display(arr, n);
    sort(arr, arr + n);

    printf("After using sort function: \n");
    display(arr, n);
    
    sort(arr, arr + n, greater< int >());
    printf("Array in descending order using greater< int > parameter: \n");
    display(arr, n);



    return 0;
}
