// Count the non repeating elements in the array
// Using hashing

#include<bits/stc++.h>
#include<unordered_map>
using namespace std;

int main
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        unordered_map<int, int> umap;
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> umap;
        for(int i = 0 ; i < n; i++)
            umap[arr[i]]++;
        int count = 0;
        for(auto x : umap){
            if(x.second == 1)
                count++;
        }
        
        cout << count << " \n";
    }

    return 0;
}
