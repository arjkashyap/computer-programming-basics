// Count the repeating elements

#include<bits/stdc++.h>
using namespace std;

void maxOcc(int arr[], int n){
    int count = 1;
    int var = 0;
    sort(arr, arr + n);
    for( int  i = 0; i < n; i++ ){
        while(arr[i] == arr[i + 1]){
            var = arr[i];
            count++;
            i++;
            cout << count << endl;
        }
        if( count > 1 ) break;
    }
    cout << var << " " << count << endl;
}

int main()
 {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    maxOcc(arr, n);

	}
	return 0;
}
