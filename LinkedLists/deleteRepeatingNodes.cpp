// Given a head to a linked list, delete the repeating elements in a Sorted linked list

#include<bits/stdc++.h>

struct Node
{
    int data;
    struct Node* next;
    Node(int key)
    {
        data = key;
        next = nullptr; 
    }
};

Node* Insert(Node* head, int data)
{
    Node* newNode = new Node(data);
    if(!head)
        return newNode;
    Node* ptr = head;
    while( ptr -> next )
        ptr = ptr -> next;

   ptr -> next = newNode; 
    return head;
}

void Display(Node* head)
{
    Node* ptr = head;
    while(ptr){
        std::cout << ptr -> data << " ";
        ptr = ptr -> next;
    }
    std::cout << "\n";
}

// Function for removing duplicates
Node* removeDuplicates(Node* head)
{
    Node* ptr = head;
    while(ptr -> next != nullptr){
        if( ptr -> data == ( ptr -> next ) -> data ){
            Node* tmp = ptr -> next;
            ptr -> next = ptr -> next -> next;
            free(tmp);
        }
        else{
            ptr = ptr -> next;
        }
    }
    return head;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    int t;
    std::cin >> t;
    while(t--){
        int n;
        Node* head = nullptr; 
        std::cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            std::cin >> x;
            head = Insert(head, x); 
        }
        head = removeDuplicates(head);
        Display(head);
    }

    return 0;
}
