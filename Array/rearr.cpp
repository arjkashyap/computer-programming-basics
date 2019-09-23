#include<iostream>
using namespace std;

int max(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > res)
            res = arr[i];
    }
    return res;
}

void rearrange(int arr[], int n){
    int max_elm = max(arr, n) + 1;
    cout<<max_elm<<endl;
    for(int i = 0; i < n; i++)
        arr[i] += (arr[arr[i]]%max_elm)*max_elm;
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        
        rearrange(arr, n);
        for(int i = 0; i < n; i++)
            cout<<arr[i]/n<<" ";
        cout<<endl;
    }
    
    return 0;
}