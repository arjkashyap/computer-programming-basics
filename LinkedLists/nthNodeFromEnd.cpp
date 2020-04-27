// Find the nth node of the linked list from the end
// Note: N will not be given
// This is the implementation of the naive approach

#include<bits/stdc++.h>

struct Node
{
    int data;
    Node* next;
    Node(int key)
    {
        data = key;
        next = nullptr;
    }
};

Node* AppendNode(Node* head, int data)
{
    Node* newPtr = new Node(data);
    if( head == nullptr )
        return newPtr;
    Node* ptr = head;
    while( ptr -> next != nullptr )
        ptr = ptr -> next;
    newPtr -> next = ptr -> next;
    ptr -> next = newPtr;
    return head;
}

void Display(Node* head)
{
    while(head != nullptr){
        head = head -> next;
    }

    std::cout << "\n";
}

int nthNode(Node* head, int index)
{
    Node* ptr = head;
    int length = 1;
    while(ptr -> next != nullptr){
        ptr = ptr -> next;
        length++;
    }
    int i = length - index;
    std::cout << "i: " << i << "\n";
    int j = 1;
    ptr = head;
    while(j <= i){
        ptr = ptr -> next;
        j++;
    }
    return ptr -> data;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--){
        Node* head = nullptr;
        int n, nIndex;
        std::cin >> n;
        for(int i = 0; i < n; i++){
            int key;
            std::cin >> key;
            head = AppendNode(head, key);
         }
        Display(head);
        std::cin >> nIndex;
        std::cout << nthNode(head, nIndex) << "\n";
    }
    return 0;
}
