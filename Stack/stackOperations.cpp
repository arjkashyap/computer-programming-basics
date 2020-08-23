// Array implementation of stack

#include<iostream>
using namespace std;

#define MAX_SIZE 20		// Size of the array.

int top = -1;
int arr[MAX_SIZE];			// Global Array

// Inserting an element
void push(int a){
	if(top == MAX_SIZE - 1){
		cout<<"Over Flow"<<endl;
		return;
	}
	arr[++top] = a;			// Insert element at the top
	
}

// Delete element from the top
void pop(){
	if(top == -1){
		cout<<"Under Flow"<<endl;
		return;
	}
	top--;				// Decrease top value by one
}

// Check if the stack is empty
bool isEmpty(){			
	if(top == -1) return true;
	else return false;
}

// Display stack
void display(){
	int i = top;
	while(i != -1){
		cout<<arr[i]<<" ";
		i--;
	}
	cout<<endl;
}

int main(){
	push(5);push(4);push(3);push(2);push(1);
	display();
	pop();pop();pop();
	display();
	return 0;
}











