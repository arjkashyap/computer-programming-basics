// Selection sort Algorithem

#include<iostream>
using namespace std;

void SelectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int iMin = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[iMin])
                iMin = j;
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
}


int main(){
    int total = 7;
    int arr[] = {4, 11, 2, 9, 3, 1, 8};

    SelectionSort(arr, total);
    for(int i = 0; i < total; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
} 
