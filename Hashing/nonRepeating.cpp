// Print the non repeating elements
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            arr[i] = a;
            map[a]++;
        }

        for(int i = 0; i < n; i++)
            if( map[arr[i]] == 1 )
                cout << arr[i] << " ";
       
        
        cout << endl;

    }

    return 0;
}
