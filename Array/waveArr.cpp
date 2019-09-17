#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        int i = 0;
        while(i + 1 < n){
            swap(&a[i], &a[i+1]);
            i+= 2;
        for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        cout<<endl;
        }
    }

    return 0;
}
