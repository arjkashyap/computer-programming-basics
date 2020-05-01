// Delete a node with only the pointer to it
// The node to be deleted will never be the end node
// The given code only works if the given node is not the last node

#include <bits/stdc++.h>


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

Node* deleteNode(Node* ptr)
{
    if( ptr -> next ){
        Node* tmp = ptr -> next;
        ptr -> data = ptr -> next -> data;
        ptr -> next = ptr -> next -> next;
    }
    else{
        std::cout << "Cannot delete the last node using this alogrithm \n";
    }
}

Node* findAddress(Node* head, int data)
{
    while(head){
        if( head -> data == data )
            return head;
        head = head -> next;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    Node *head = nullptr;
    int delNode = 17;
    head = Insert(head, 5);
    head = Insert(head, 7);
    head = Insert(head, 30);
    head = Insert(head, delNode);
    Node* delAdd = findAddress(head, delNode);

    head= Insert(head, 44);
    head = Insert(head, 50);
    Display(head);

    deleteNode(delAdd);

    Display(head);

    return 0;
}
