// For a given array pair the positive negative pair

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        unordered_set<int> s;
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            a[i] = num;
            s.insert(num);
        }
        sort(a, a + n);
        int index = 0;
        while(index < n){
            if(!(a[index] <= 0)){
                int neg = -1 * a[index];
                if( s.find(neg) != s.end() )
                    cout << a[index] << " " << neg << " ";
            }
            index++;
        }
        cout << "\n";
    }
    return 0;
}
