#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool isPermutePalin(string s)
{
	int n = s.length();
	vector<int> arr(126, false);
	
	// invert bits
	for(char c : s)
		arr[c] = !arr[c];

	
	int setBits = 0;
	for(bool bit : arr){
		if(bit)
			setBits++;
	}
	
	
	// even number of chars
	if(n%2 == 0 && setBits == 0)
		return true;
	if(n%2 != 0 && setBits == 1)
		return true;
	
	return false;

}

int main()
{
	string str;
	getline(cin, str);
	// nitin
	if(isPermutePalin(str))
		cout << "True";
	else 
		cout << "False";
	cout << endl;
	return 0;
}