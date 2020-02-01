// Merge two sorted arrays without any additional extra space

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    

} 

int main()
{
    iost::sync_with_stdio(false);
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for( int i = 0; i < n; i++ ) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        merge(a, b, n, m);
        for( int i = 0; i < n; i++ ) cout << a[i] << " ";
        for(int i = 0; i < m; i++) cout << b[i] << " ";
        cout << "\n";
    }

    return 0;
}
