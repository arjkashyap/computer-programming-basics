// Merge two linked lists which have been given in a sorted manner
// eg:  l1 => 50 10 15 40
//      l2 => 2 3 20
//      res => 2 3 50 10 15 20 40

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

// Function merges two sorted linked list
Node* sortedMerge(Node* head1,   Node* head2)
{
    Node* head = nullptr;
    if( head1 -> data < head2 -> data ){
        head = head1;
        head1 = head1 -> next;
    }
    else{
        head = head2;
        head2 = head2 -> next;
    }

    Node *ptr = head;

    while( head1  && head2 ){

        if( head1 -> data < head2 -> data ){
            ptr -> next = head1;
            head1 = head1 -> next;
        }
        else{
            ptr -> next = head2;
            head2 = head2 -> next;
        }
        ptr = ptr -> next;
    }
    while( head1 ){
        ptr -> next = head1;
        head1 = head1 -> next;
        ptr = ptr -> next;
    }
    while( head2 ){
        ptr -> next = head2;
        head2 = head2 -> next;
        ptr = ptr -> next;
    }
    return head;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        Node *h1 = nullptr;
        Node *h2 = nullptr;
        int n1, n2;
        std::cin >> n1 >> n2;
        for (int i = 0; i < n1; i++)
        {
            int x;
            std::cin >> x;
            h1 = Insert(h1, x);

        }
        for (int i = 0; i < n2; i++)
        {
            int y;
            std::cin >> y;
            h2 = Insert(h2, y);
        }
        Node* h = sortedMerge(h1, h2);
        Display(h); 

    }

    return 0;
}
