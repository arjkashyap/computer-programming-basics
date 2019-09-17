// Reverse k groups of an array arr of size n
#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void reverse(int a[], int low, int high){
    while(low < high){
        swap(&a[low], &a[high]);
        low++;
        high--;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++)cin>>a[i];
        int index = 0;
        while(index < n){
            reverse(a, index, index + k - 1);
            
            index += k;
            cout<<"loop index: "<<index<<endl;
        }
        for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        reverse(a, index - k, n - 1 );
        for(int i = 0; i < n; i++)cout<<a[i]<<" ";
        cout<<endl;

    }
    return 0;
}
