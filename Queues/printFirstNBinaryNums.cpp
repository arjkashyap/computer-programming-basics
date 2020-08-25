// Printing the first n binary numbers using queue

#include<iostream>
#include<queue>
#include<string>
using namespace std;


// function for printing binary numbers uptil n
void printBin(int n){
    queue<string> q;    // Create a queue named q

    q.push("1");

    while(n--){

        // store the first element in s1 and dequeue
        string s1 = q.front();    
        q.pop();
        cout<<s1<<endl;

        string s2 = s1;
        
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    cout<<endl;
}

int main(){
    int n;   
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    printBin(n);
    return 0;
}
