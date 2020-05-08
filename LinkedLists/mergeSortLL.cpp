// Merge sort implementation for linked list


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

Node* findMiddleNode(Node* head)
{
    Node *slow = head;
    Node *fast = head;
    while( fast && fast -> next ){
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    return slow;
}

Node* merge(Node* h1, Node* h2)
{
    std::cout << "Lists in the merge function \n";
    Display(h1);
    Display(h2);
    Node *head = nullptr;
    if( h1 -> data < h2 -> data ){
        head = h1;
        h1 = h1 -> next;
    } else{
        head = h2;
        h2 = h2 -> next;
    }
    Node *tail = head;
    while( h1 && h2 ){
        if( h1 -> data < h2 -> data ){
            tail -> next = h1;
            tail = h1;
            h1 = h1 -> next;
        } else{
            tail -> next = h2;
            tail = h2;
            h2 = h2 -> next;
        }
    }

    return head;
}

Node* mergeSort(Node* head) 
{
    std::cout << "List in merge sort fun \n";
    Display(head);
    Node *mid = findMiddleNode(head);
    std::cout << "Mid node is: " << mid -> data << "\n";
    Node *h1 = head;
    Node *h2 = mid -> next;
    mid-> next = nullptr;
    mergeSort(h1);
    mergeSort(h2);
    return merge(h1, h2);
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
        head = mergeSort(head);
        Display(head);
    }

    return 0;
}



