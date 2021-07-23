#include<iostream>
#include<string>

/*
	replace space with '%20' in the string 
	i/p: "Mr John Smith     " 
			13
	o/p: "Mr%20John%20Smtih;
*/

using namespace std;

string replaceSpace(string str, int n)
{
	string res = "";
	string rep="%20";

	for(char c : str)
	{
		if(c == ' '){
			res.append(rep);
			continue;
		}
		res += c;
	}
	return res;
}

int main()
{
	string str = "Hey Mr Smith";
	int n = str.length();
	string res = replaceSpace(str, n);
	cout << res << endl;
	return 0;b
}