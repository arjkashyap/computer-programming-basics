// Implementation of direct address table in hashing
// Challenge: We have to perform, Insert, Del, and Search (bool) in O(1) time
// DAT is usefull when the range of keys is small

#include<bits/stdc++.h>
using namespace std;

int table[999] = {0};

void Insert(int a){ table[a] = 1; }
void Delete(int a){ table[a] = 0; }
int Search(int a)
{ 
    if(table[a]) return 1;
    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    int s;
    Insert(12);
    Insert(7);
    Insert(818);
    Insert(123);
    Insert(900);

    cout << "Enter an element to search \n";
    cin >> s;
    if(Search(s))
        cout << "Present\n";
    else
        cout << "Absent\n";
    Delete(7);
    Delete(123);

    cout << "Search an element\n";
    cin >> s;
    if(Search(s))
        cout << "Present\n";
    else
        cout << "Absent\n";

    

    return 0;
}
