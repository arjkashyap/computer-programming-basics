// Implementation of Open addressing where collisions are handled via a techinque called double hashing
// Here in double hashing, we resolve conflicts via taking another hash function 


#include<bits/stdc++.h>
using namespace std;

#define TABLE_SIZE 13
#define PRIME 7                 // Has to be smaller than table size


class MyHash
{
    private:
        int *hashTable;
        int curr_size;
    
    public:
        MyHash()
        {
            hashTable = new int[TABLE_SIZE];
            curr_size = 0;
            for(int i = 0; i < curr_size; i++)
                hashTable[i] = -1;
        }
        
        int hash(int key);
        int hashTwo(int);
        void insert(int);
        void remove(int);
        bool search(int);
        void display();
        bool isFull();

};

// Hash function
int MyHash::hash(int key)
{
    return (key % TABLE_SIZE);
}

// Hash function collision helper
int MyHash::hashTwo(int key)
{
    return (PRIME - (key % PRIME));
}

// Returns true if the hash table is full
bool MyHash::isFull()
{
    return (curr_size == TABLE_SIZE);
}

// Search element
bool MyHash::search(int element)
{
    int index = hash(element);
    if(hashTable[index] == element){
        return true;
    }
    int index2 = hashTwo(element);
    int i = 1;
    while(hashTable[index] != -1){
        int resolveIndex = (index + (i * index2));
        
        if(hashTable[resolveIndex] == element)
            return true;
        
        i++;
    }
    return false;
}

// Inserts an element in hash table
void MyHash::insert(int element)
{
    if(isFull()){
        cout << "Hash table full \n";
        return;   
    }

    int index = hash(element);
    
    // Resolving collision
    if(hashTable[index] != -1){
        int index2 = hashTwo(element);
        int i = 1;
        while(true){
            int resolveIndex = (index + i*index2);
            
            if(hashTable[resolveIndex] == -1){
                hashTable[resolveIndex] = element;
                curr_size++;
                break;
            }
            
            i++;
        }
    }
    else{
        hashTable[index] = element; 
        curr_size++;
    } 
}

void MyHash::remove(int element)
{
    int index = hash(element);
    if(hashTable[index] == element){
        hashTable[index] = 0;
        return;
    }
    int index2 = hashTwo(element);
    int i = 2;
    int resolveIndex = index + index2; 
    while(hashTable[resolveIndex] != -1){
        if(hashTable[resolveIndex] == element){
            hashTable[resolveIndex] = 0;
            return;
        }
        resolveIndex = (index + (i* index2));
        i++;

    }
}

// Display hash table
void MyHash::display()
{
    //for(int i = 0; i < TABLE_SIZE; i++)
    //    cout << i << " -> " << hashTable[i] << "\n";
    for (int i = 0; i < TABLE_SIZE; i++) 
        { 
            if (hashTable[i] != -1) 
                cout << i << " --> "
                     << hashTable[i] << endl; 
            else
                cout << i << endl; 
        } 
     
}

int main()
{
    ios::sync_with_stdio(false);
    MyHash ht;
    int a[] = {19, 27, 36, 10, 64};
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0; i < n; i++)
        ht.insert(a[i]);
    ht.display();

    return 0;
}











