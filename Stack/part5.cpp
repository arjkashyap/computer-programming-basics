// Evalutation of post fix expression using stack

#include<iostream>
#include<string>
#include<stack>
using namespace std;

// Check if the expression is an operand
bool isOperand(char c){
    if(c >= '0' && c <= '9') return true;
    return false;
}

// Check if the expression is an operator
bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/')
        return true;
    return false;
}

// Perform operation 
int operation(int a, int b, char op){
    if(op == '+') return b + a;
    if(op == '-') return b - a;
    if(op == '*') return b * a;
    if(op == '/') return b / a;
}

// Function for post fix evalutation.
int postFix(string s){
    int op1, op2, oprt;
    stack<int> S;
   
    
    for(int i = 0; i < s.length(); i++){
        
        if(s[i] == ' ' || s[i] == ',') continue;
   
      // If an operand is encountered, push to stack
        if(isOperand(s[i])){
          
          // Extract the value of int from char

          int x = 0;
          while(i<s.length() && isOperand(s[i])){
            x = (x*10) + (s[i] - '0');
            i++;
          }
   
            i--;
          
           S.push(x);
           
        }
     
       
      // if Operator is encountered, pop two operators
        if(isOperator(s[i])){
            op1 = S.top();
            S.pop();
            op2 = S.top();
            S.pop();
            oprt = s[i];

            // push the result on stack
            S.push(operation(op1, op2, oprt));  
        }
    }
    return S.top();
}

int main(){
    string str;
    getline(cin, str);
    cout<<postFix(str)<<endl;
    return 0;
}
