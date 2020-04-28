// Reversing a linked list using itterative method

#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node* next;

    Node(int key){
        data = key;
        next = nullptr;
    }
};

Node* Insert(Node* head, int data)
{
    Node* newNode = new Node(data);
    if( head == nullptr )
        return newNode;
    Node* ptr = head;
    while( ptr -> next != nullptr )
        ptr = ptr -> next;
    newNode -> next = ptr -> next;
    ptr -> next = newNode;
    return head;
}

void Display(Node* head)
{
    if(head == nullptr)
        return;
    while(head != nullptr){
        std::cout << head -> data << " ";
        head = head -> next;
    }
    std::cout << "\n";
}

Node* Reverse(Node* head)
{
    if(head == nullptr)
        return nullptr;

    Node* prev = nullptr;
    Node* nxt = nullptr;
    Node* curr = head;
    while(curr != nullptr){
        nxt = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        Node* head = nullptr;
        int n;
        std::cin >> n;
        for( int i = 0; i < n; i++ ){
            int x;
            std::cin >> x;
            head = Insert(head, x);
        }
        std::cout << "Linked list: ";
        Display(head);
        head = Reverse(head);
        std::cout << "After reversing the linked list: ";
        Display(head);

    }
    return 0;
}
