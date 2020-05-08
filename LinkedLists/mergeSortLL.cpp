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

void splitList(Node* source, Node** frontRef,
               Node** backRef) {
    struct Node* fast;
    struct Node* slow;
    if (source == NULL || source->next == NULL) {
        *frontRef = source;
        *backRef = NULL;
    } else {
        slow = source;
        fast = source->next;
        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        *frontRef = source;
        *backRef = slow->next;
        slow->next = NULL;
    }
}

Node* mergeList(struct Node* a, struct Node* b) {
    struct Node* result = NULL;
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);
    if (a->data <= b->data) {
        result = a;
        result->next = mergeList(a->next, b);
    } else {
        result = b;
        result->next = mergeList(a, b->next);
    }
    return (result);
}

Node* mergeSort(Node *head) {
    
    struct Node* a;
    struct Node* b;
    if (head == NULL || head->next == NULL) return head;
    splitList(head, &a, &b);
    a = mergeSort(a);
    b = mergeSort(b);
    return mergeList(a, b);
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



