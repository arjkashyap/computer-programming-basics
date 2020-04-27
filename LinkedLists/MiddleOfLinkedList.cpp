// For a given linked list, find the middle element of the list
// Note: Total number of elements in the linked list will not be given
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

Node* insertAtEnd(Node* head, int key)
{
    Node* newNode = new Node(key);
    if(head == nullptr)
        return newNode;
    Node* ptr = head;
    while(ptr -> next != nullptr)
        ptr = ptr -> next;
    newNode -> next = ptr -> next;
    ptr -> next = newNode;
    return head;
}

void Display(Node* head)
{
    while(head != nullptr){
        std::cout << head -> data << " ";
        head = head -> next;
    }
    std::cout << "\n";
}

int findMiddleElement(Node* head)
{
    if( head == nullptr )
        return -1
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast -> != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow -> data;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while(t--)
    {
        Node* head = nullptr;
        int n;
        std::cin >> n;
        for(int i = 0; i < n; i++){
            int e;
            std::cin >> e;
            head = insertAtEnd(head, e);
        }
        std::cout << "Lined list: ";
        Display(head);
        std::cout << "Middle element: " << findMiddleElement(head) << "\n";
    }
    return 0;
}
