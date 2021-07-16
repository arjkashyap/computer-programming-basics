
#include<iostream>
#include<string>

using namespace std;

/*
	Generate permutations of a given string 
	that does not contain 'AB' as a substring
*/

void permute(string s, int l, int r)
{
	if(l == r){
		if(s.find("AB") == string::npos)
			cout << s << " ";
		return;
	}
	for(int i = l; i<=r; i++){
		swap(s[i], s[l]);
		permute(s, l+1, r);    // fixing the character
		swap(s[i], s[l]);     // backtracking
	}
}

void printPermutations(string s)
{
	int n = s.length();
	permute(s, 0, n-1);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		printPermutations(s);
		cout << endl;
	}
	return 0;
}