#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unordered_map<int, int> map;
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            a[i] = input;
            map[a[i]]++;
        }
        int index = -1;
        for(int i = 0; i < n; i++){
            if( map[a[i]] > 1 ){
                index = i;
                break;
            }
        }
        cout << index << "\n";
    }
    return 0;
}

