// This is another approach of merging two sorted linked lists
// In this aapproach we maintain a tail pointer

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
Node *Insert(Node *head, int newData)
{
    if (head == nullptr)
        return new Node(newData);
    Node *newNode = new Node(newData);
    Node *ptr = head;
    while (ptr->next != nullptr)
        ptr = ptr->next;
    ptr->next = newNode;
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

Node *mergeList(Node *h1, Node *h2)
{
    Node *head = nullptr;
    Node *tail = nullptr;
    if (h1->data < h2->data)
    {
        head = h1;
        tail = head;
        h1 = h1->next;
    }
    else
    {
        head = h2;
        tail = head;
        h2 = h2->next;
    }

    while (h1 && h2)
    {
        if (h1->data < h2->data)
        {
            tail->next = h1;
            h1 = h1->next;
            tail = h1;
        }
        else
        {
            tail->next = h2;
            h2 = h2->next;
            tail = h2;
        }
    }
    tail->next = (h1 == nullptr) ? h1 : h2;

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
        std::cin >> n1;
        for (int i = 0; i < n1; i++)
        {
            int x;
            std::cin >> x;
            h1 = Insert(h1, x);
        }
        std::cin >> n2;
        for (int i = 0; i < n2; i++)
        {
            int x;
            std::cin >> x;
            h2 = Insert(h2, x);
        }
        Node *h = nullptr;
        h = mergeList(h1, h2);
    }

    return 0;
}