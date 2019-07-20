// Reversing a string input using stack.

#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

void reverse(char a[], int n){
	stack<char> S;
	// Insert elements in the stack
	for(int i = 0; i < n; i++){ S.push(a[i]); }
	
	// Pop elements and return reversed array.
	for(int i = 0; i<n; i++){
		a[i] = S.top();		// replace chracter from array.
		S.pop();			// pop element
	}
}

int main(){
	char arr[100];
	cout<<"Enter the String to be reversed."<<endl;
	cin>>arr;
	reverse(arr, strlen(arr));
	cout<<arr<<endl;
	return 0;

}
