// Given an input key, the task is to insert the key at the begining or end of the linked list
// Depending upon the value of p. If p == 0, insert at the begining else at the end

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
Node *insertAtBegining(Node *head, int newData)
{
    Node *newNode = new Node(newData);
    newNode->next = head;
    head = newNode;
    return head;
}

// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)
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
            int key, p;
            std::cin >> key >> p;
            std::cout << "key -> " << key << " p -> " << p << std::endl;
            if (p == 0){
                std::cout << " P is 0 \n";
                head = insertAtBegining(head, key);
            }

            else if ( p == 1 ){
                std::cout << "P is 1 \n";
                head = insertAtEnd(head, key);
            }

        }
        Display(head);
    }

    return 0;
}
