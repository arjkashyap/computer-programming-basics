// For a given linked list: swap the adjacent two nodes in each interval

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

// Function swaps the adjacent two nodes for the given linked list
void swapPairs(Node* head)
{
    Node* ptr = head;
    while( ptr && ptr -> next ){
        int tmp = ptr -> data;
        ptr -> data = ptr -> next -> data;
        ptr -> next -> data = tmp;
        ptr = ptr -> next -> next;
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
       swapPairs(head);
        Display(head);
    }

    return 0;
}
