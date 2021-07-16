#include<iostream>

using namespace std;

/*
	Unoptimized approach to get fibonacci number 
	at nth index
*/

int fib(int n)
{
	if(n == 0 || n == 1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n);
	cin.get();
	return 0;
}