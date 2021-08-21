#include<iostream>
#include<string>
using namespace std;

/*
	Edit distance problem
	Given two strings, s1 and s2, we need to convert 
	s1 into s2 using minimual number of operations
	
	operations: Cut, Insert, Replace
	
	i/p: "CAT", "CUT"
	o/p: 1     => A replaced by U
	
	i/p: "BAT", "BATS"
	o/p: 1     => Insert S
	
	       i	                         op: 
	i/p: "SATUR", "SUN"
	o/p: 3
	
	Remove / Replace 
	i/p: "CRAZY", "LAZY"
	o/P: 2
	
	func(s1, s2, n1, n2):
	    
	
*/

// min of 3 numbers
int getMin(int a, int b, int c)
{
	return min(min(a, b), c);
}

int minEdits(string s1, string s2, int m, int n)
{
	if(m==0) return n;
	if(n==0) return m;
	
	// chars match
	if(s1[m-1] == s2[n-1]){
		return minEdits(s1, s2, m-1, n-1);
	}else{
		
		return 1 + getMin(minEdits(s1, s2, m, n-1),  // inserting
						minEdits(s1, s2, m-1, n),          // deleting
						minEdits(s1, s2, m-1, n-1));
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int res = minEdits(s1, s2, s1.length(), s2.length());
		cout << res << endl;
	}
	return 0;
}