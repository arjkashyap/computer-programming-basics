// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    /*
        2 -> abc
        3 -> def
        4 -> ghi
        adg, bdg, cdg, ceh, ceg, aeg, afg, adh, adi
        abc -> adg, bdg, 
        
        f(idx):
            
        
    */
    

    void getCombinations(int* arr, int n, vector<string>& mapping, int keyIndex, string curr, vector<string>& res)
    {
        
        if(keyIndex >= n){
            res.push_back(curr);
            return;
        }
        string digits = mapping[arr[keyIndex]];  // abc/def/ghi
        for(int i = 0; i < digits.length(); i++)
            getCombinations(arr, n, mapping, keyIndex+1, curr + digits[i], res);
        
    }
    
    vector<string> possibleWords(int a[], int n)
    {
        vector<string> res;
        if(n==0)
            return res;
        vector<string> mapping = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        getCombinations(a, n, mapping, 0, "", res);
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends