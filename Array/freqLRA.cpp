#include<iostream>
using namespace std;

void printfrequency(int arr[], int n)
{ 
	// Your code herre
	int a[n] = {0};
	for(int i = 0; i < n; i++){
	    a[arr[i] - 1]++;
	}
	for(int i = 0; i < n; i++)
	    cout<<a[i]<<" ";
} 


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        printfrequency(arr, n);
        cout << endl;
    }

    return 0;
}
