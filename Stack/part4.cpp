// Check for balanced parenthesis using stack.

#include<iostream>
#include<stack>
#include<string>
using namespace std;

	// global stack object

// Function for checking balanced string
bool isBalanced(string s){

	// Create a stack object
	stack<char> st;	
	char x;
	for(int i = 0; i < s.length(); i++){
		if( s[i] == '(' || s[i] == '{' || s[i] == '[' ){st.push(s[i]);}
		
		// If the stack is empty
		if(st.empty()){ return false; }
		
		switch(s[i]){
			case ')':
				x = st.top();
				st.pop();
				if( x == '{' || x == '[')
					return false;
				break;
			case '}':
				x = st.top();
				st.pop();
				if(x == '(' || x == '[')
					return false;
				break;
			case ']':
				x = st.top();
				st.pop();
				if(x == ')' || x == '}')
					return false;
				break;
		}
	}
	// if stack is empty than eq is balanced.
	return (st.empty());
}

int main(){
	string str;
	cout<<"Enter a String for checking balanced equation. "<<endl;
	cin>>str;
	if(isBalanced(str))
		cout<<"True";
	else
		cout<<"False";
		
	cout<<endl; 
	return 0;
}

