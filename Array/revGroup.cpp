#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t --){
        int  n, k;
        cin>>n>>k;
        vector<long long> mv;
        for(int i = 0; i < n; i++) cin >> mv[i];
            long long index = 0;
    while(index + (k - 1) < n){ 
        reverse(mv.begin() + index, mv.begin() + index + k);
        index += k;
    }
    reverse(mv.begin() + index, mv.end());
        for(int i = 0; i < n; i++)
            cout << mv[i] << " ";
        cout << endl;
    }

    return 0;
}
