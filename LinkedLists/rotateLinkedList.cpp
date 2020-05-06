// Given a singly linked list, rotate it counter clowckwise by k nodes

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

Node *findTail(Node *root)
{
    while (root->next)
    {
        root = root->next;
    }
    return root;
}

// Function reverses the linked list
Node *reverse(Node *head, Node *limit)
{
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != limit)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *rotate(Node *head, int k)
{
    Node *kPos = head;
    int index = 0;
    while (index < k)
    {
        kPos = kPos->next;
        index++;
    }
    head = reverse(head, kPos);
    kPos = reverse(kPos, nullptr);
    Node *tail1 = findTail(head);
    tail1->next = kPos;
    head = reverse(head, nullptr);
    return head;
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
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            head = Insert(head, x);
        }
        std::cin >> k;
        head = rotate(head, k);
        Display(head);
    }

    return 0;
}
