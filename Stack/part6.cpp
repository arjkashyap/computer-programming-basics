// Conversion of infix to post fix using stack

#include<iostream>
#include<stack>
#include<string>

using namespace std;

// Return the precedence of the operator
int prec(char c){
    if(c == '^')
        return 3;
    if(c == '*' || c == '/')
        return 2;
    if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}


// Function for converting the string from in to post
void convert(string str){
    stack<char> S;
    string res;
    int l = str.length();
    S.push('N');            // End point for stack
    for(int i = 0; i < l; i++){
        if(str[i] == '('){ S.push('('); }
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            res += str[i];
        }

       // Keep popping until ( is encountered
       if(str[i] == ')'){
           while(S.top() != '(' || S.top() != 'N'){
            char c = S.top();
            res += c;
            S.pop();
           }
           S.pop();
       }
       else{
            while(S.top() != 'N' && prec(str[i]) <= prec(S.top())){
                res += S.top();
                S.pop();
                
            }
            S.push(str[i]);
       }

    }
    cout<<res<<endl;
}

int main(){
    int t;
    string inp;
    cin>>t;
    while(t--){
        cin>>inp;
        convert(inp);
    
    }
    return 0;

}
