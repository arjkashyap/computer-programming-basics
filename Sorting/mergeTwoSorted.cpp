// For given two sorted arrays, we have to merge them without
// taking any extra space
// This is an unoptimized approach

#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n)
{
    for( int i =0; i < n; i++ )
        cout << a[i] << " " ;
    cout << endl;
}

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    int i = 0, j = 0;
    Display(arr1, n);
    Display(arr2, m);
    while(i < n && j < m){
        if( arr1[i] <= arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
    
        else if(arr1[i] > arr2[j]){
            cout << arr2[j] << " ";
            j++; 
        }
    }
    while(i < n){
        cout << arr1[i] << " ";
        i++;
    }
    while(j < m){
        cout << arr2[j] << " ";
        j++;
    }

} 

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        cin >> n1 >> n2;
        int a1[n1] = {0}, a2[n2] = {0};
        
        for( int i = 0; i < n1; i++ )
            cin >> a1[i];

        for( int i = 0; i < n2; i++ )
            cin >> a2[i];
        merge(a1, a2, n1, n2);
        cout << "\n";
    }

    return 0;
}
