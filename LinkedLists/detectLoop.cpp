// For a given singly linked list, detect if it contains a loop

#include <bits/stdc++.h>

// Linked list node

struct Node
{

    int data;
    struct Node *next;

    Node(int key)
    {
        data = key;
        next = nullptr;
    }
};


// function appends the data at the end of the list
Node* Insert(Node *head, int newData)
{
   if(head == nullptr)
        return new Node(newData);
    Node *newNode = new Node(newData);
    Node *ptr = head;
    while(ptr -> next != nullptr)
        ptr = ptr -> next;
    ptr -> next = newNode;
    newNode = nullptr;
    return head;
}

// function to display the data
void Display(Node *head)
{
    while (head != nullptr)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
}


// Function returns true if the ll has a loop
bool hasLoop(Node* head)
{
    std::unordered_set< Node* > s;
    while(head){
        if( s.find( head ) != s.end()){
            return true;
        }else{
            s.insert(head);
            head = head -> next;
        }
       return false; 
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        Node *head = nullptr;
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            head = Insert(head, x);

        }
        Display(head);
        if( hasLoop(head) )
            std::cout << "Linked list has loop\n";
        else
            std::cout << "LL does not have loop\n";
    }

    return 0;
}
