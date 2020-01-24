#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    vector<int> v;
    sort(arr1, arr1 + N);
    sort(arr2, arr2 + M);

    int i = 0, j = 0;
    while( i < N && j < M ){
        if( arr1[i] == arr2[j] ){
            v.push_back(arr1[i]);
            i++; j++;
        }
        else if( arr1[i] < arr2[j] ){
            i++;
        }
        else{
            j++;
        }
    }

    if( !v.empty() ){
        for( int i = 0; i < v.size(); i++ ){
            if( v[i] != v[i+1] )
                cout << v[i] << " ";
        }
    }
    else{
        cout << -1 << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while( t-- ){
        int n1, n2;
        cin >> n1 >> n2;
        int A1[n1] = {0}, A2[n2] = {0};
        for( int i = 0; i < n1; i++ )
            cin >> A1[i];
        for( int i = 0; i < n2; i++ )
            cin >> A2[i];
        printIntersection(A1, A2, n1, n2);
        cout << "\n";
    }

    return 0;
}
