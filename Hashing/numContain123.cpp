#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_set<int> set;
        set.insert(1); set.insert(2); set.insert(3);
        int n;
        cin >> n;
        int a[n];
        int flag = 1;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++){
            bool print = true;
            int num = a[i];
            while(num){
                int digit = num % 10;
                if( set.find(digit) == set.end() ){
                    print = false;
                    break;
                }
                num /= 10;
            }
            if(print){
                cout << a[i] << " ";
                flag = 0;
            }
        }
        if(flag)
            cout << -1;
        cout << "\n";
    }
    return 0;
}
