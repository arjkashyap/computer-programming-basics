// Find the nth node of the linked list from the end
// Note: N will not be given
// This is the optimized approach which does not calculate the number of nodes in the list

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

// Function to print the nth node from end
int nthNode(Node* head, int index)
{
    Node* sec = head;
    int i = 0;
    Node* first = head;
    while(i < index)
    {
        first = first -> next;
        i++;
    }

    if(head == nullptr)
        return -1;

    while(first != nullptr)
    {
        sec = sec -> next;
        first = first -> next;
    }

    return sec -> data ;
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
