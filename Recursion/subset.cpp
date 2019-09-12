// To print the subsets of a string using recursion

#include<iostream>
using namespace std;

void printSub(string s, string curr = "",  int index = 0){
    
    if( index == s.length() ){
        cout<<curr<<endl;
        return;
    }
    printSub(s, curr , index + 1);
    printSub(s, curr + s[index], index + 1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        printSub(s);
        cout<<endl;
    }

    return 0;
}

