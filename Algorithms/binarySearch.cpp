// Binary search can be performed on a sorted array
#include<iostream>
using namespace std;

void binSearch(int a[], int n, int search){
    int start = 0, end = n-1;
    int mid;
    while( start <= end){
        mid = (start + end)/2;
        if(a[mid] == search){
            cout<<search<<" found at "<< mid+1 <<" position.\n";
            return;
        }
        else if ( search < a[mid])
            end = mid -1;
        else
            start = mid + 1;
    }
    
    cout<<"Element is not found"<<endl;
}

int main(){
    int n, s;
    cout<<"Enter the number of elements to be inserted in array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Insert the number of elements in the array. "<<endl;
    for(int i = 0; i < n; i++) 
        cin>>ar[i];
    cout<<"Enter the element to be searched."<<endl;
    cin>>s;
    binSearch(arr, n, s);
    return 0;
}
