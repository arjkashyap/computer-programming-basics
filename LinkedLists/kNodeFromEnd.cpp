// The task is to find the kth node from the end of the linked list in a single traversal

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
    std::cout << "\n";
}

// Function returns the data of kth node from the end of the linke list
int getNthFromLast(Node *head, int n)
{
    Node *start = head;
    Node *end = head;
    if( !(head) )
        return -1;
    int index = 0;
    while(index < n){
        if( !(end) )
            return -1;
        end = end -> next;
        index++;
    }
    while( end ){
        start = start -> next;
        end = end -> next;
    }
    return start -> data;
}



int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        Node *head = nullptr;
        int n, k;
        std::cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            head = Insert(head, x);

        }
        std:: cout << getNthFromLast(head, k) << "\n";

    }

    return 0;
}
