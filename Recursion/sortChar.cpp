#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void subSets(string* str, string s, string curr = "", int index = 0){
    
    if(index == s.length()){
        str[index] = curr;
        cout<<curr<<" -- "<<index;
        return; 
    }

    subSets(str, s, curr, index + 1);
    str[index] = curr;
    cout<<"index is "<< index<<endl;
    subSets(str, s, curr + s[index], index + 1);
    str[index] = curr;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size = pow(2, s.length()) - 1;
        string str[size];
        subSets(str, s);
        for(int i = 0; i < size; i++)
            cout<<str[i]<<endl;
        cout<<endl;
    }
    
    return 0;
}
