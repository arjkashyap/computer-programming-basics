//Given a keypad as shown in diagram, and an N digit number. 
//List all words which are possible by pressing these numbers.

#include<iostream>
#include<string>

using namespace std;

string phone[] = {"0", "1", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"}

void possNums(string s){
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        int key;
        for(int i = 0; i < n; i++){
            num = a[key];               // get the number pressed 
            possNums(phone[num]);       // pass the string associated
        }
    
    }
    
    return 0;
}
