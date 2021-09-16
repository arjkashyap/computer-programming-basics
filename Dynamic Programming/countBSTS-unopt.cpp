#include<iostream>

using namespace std;

/*
		COUNT BST
		
	For a given number n, count the number of BSTS that can be formed
	from the numbers between 1 to n (inclusive)
	
	
	i/p: n = 1
	o/p: 1
	
	i/p: 2
	o/p: 2
		 2   1
		/	  \ 
	   1	   2
	   
	   
	i/p: 4
	o/p: 5
		
	 1     1       2           3        3
	/     /       / \         /        /
   2     2       1   3       1       1
  /       \                   \
 3         3                   2
			
	
*/

int countBST(int n)
{
	
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << countBST(n) << endl;
	}
	return 0;
}