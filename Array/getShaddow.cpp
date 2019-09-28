#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000

void dispArr(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int missing(int arr[], int n){
    // sorting
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int num = 1;
    if( arr[0] != num )
        return 1;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1] + 1)
            return arr[i-1] + 1;
    }
    return -1;
}

int repeat(int arr[], int n){
    int tmp[MAX] = {0};
    for(int i = 0; i < n; i++)
        tmp[ arr[i] ]++;
    dispArr(tmp, 10);
    
    for( int i = 0; i < MAX; i++ )
       if(tmp[i] > 1)
           return i;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int a, b;       // a = missing; b = repeating
        b = repeat(arr, n);
        a = missing(arr, n);
        cout << b << " " << a << endl;
    }
    return 0;
}
