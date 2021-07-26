#include<iostream>
#include<vector>
#include<stack>

using namespace std;

/*
	You are given a stack which support push, pop, peak, is empty
	You need to sort this stack such that top element is smallest
	
	constrains: Additional space can only be of DS stack
	4		1
	2		2
	6  ->	3
	3		4
	1		6
*/

void sortStack(stack<int>& s)
{
	stack<int> aux;
	int curr = -1;
	while(s.empty() == false)
	{
		curr = s.top();
		s.pop();
		if(aux.empty()){
			aux.push(curr);
		}else{
			//while aux elements are greater push em to s
			while(aux.top() > curr && aux.empty() == false){
				int aux_top = aux.top();
				aux.pop();
				s.push(aux_top);
			}
			aux.push(curr);
		}
	}
	while(aux.empty() == false){
		s.push(aux.top());
		aux.pop();
	}
}

int main()
{
	int n; 
	cin >> n;
	stack<int> s;
	while(n--){
		int input;
		cin >> input;
		s.push(input);
	}
	sortStack(s);
	return 0;
}