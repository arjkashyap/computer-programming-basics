// Separate chaining technique in hashing allows to us to use a linked list at each hash slot to handle the problem of collisions.
// That is, every slot of the hash table is a linked list, so whenever a collision occurs, the element can be appened as a node to 
// the linked list at the slot.

#include<bits/stdc++.h>
#include<list>
using namespace std;

class MyHash{
    private:
        int BUCKET;                 // Length of hash table
        list<int> *table;           // Hash table
  
    public:
        MyHash(int b)
        {
            BUCKET = b;
            table = new list<int>[BUCKET];
        }

        int hash(int);          // Returns the key from hash table
        bool search(int);        // Returns true if element is found
        void insert(int);       // Insert element in hash table
        void remove(int);           // Delete Element from table

};

int MyHash::hash(int key)
{
    return (key%BUCKET);
}

bool MyHash::search(int s)
{
    int index = hash(s);
    for(auto x : table[index]){
        if( x == s )
            return true;
    }
    return false;
}

void MyHash::insert(int a)
{
    int index = hash(a);
    table[index].push_back(a);
}

void MyHash::remove(int a)
{
    int index = hash(a);
    table[index].remove(a);
}

int main()
{
    MyHash ht(7);
    ht.insert(12);
    ht.insert(2);
    ht.insert(13);
    ht.insert(7);
    ht.insert(1);
    ht.insert(14);
    ht.insert(9);
    ht.insert(12);
    
    if(ht.search(12))
        cout << "12 found\n";
    else
        cout << "Not found\n";    
    
    if(ht.search(9))
        cout << "9 found\n";
    else
        cout << "Not found\n";    

    ht.remove(12);
    ht.remove(9);

    if(ht.search(12))
        cout << "12 found\n";
    else
        cout << "Not found\n";    
    
    if(ht.search(9))
        cout << "9 found\n";
    else
        cout << "Not found\n";    
    return 0;
}


