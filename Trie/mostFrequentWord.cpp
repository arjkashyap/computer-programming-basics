#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<string>

using namespace std;

/*
    Function to find most frequent word in an array of strings.
    If multiple words have same frequency, then print the word whose 
    first occurence occurs last in the array as compared to the other 
    strings with same frequency.
*/

string mostFrequentWord(string arr[], int n)
{
    unordered_map<string,int> m;
    string ans = arr[0];

    int c = 1;
    for(int i = 0 ; i < n ;i++){
        m[arr[i]]++;
        c= max(c,m[arr[i]]);
    }

    for(int i = 0 ; i < n ;i++){
        if(m[arr[i]] == c){
            ans = arr[i];
            m[arr[i]]--;      // handles first occ last case
        }
    }

    return ans ;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
         int n;
        cin >> n;
        string arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << mostFrequentWord(arr, n) << endl;
    }
    return 0;
}