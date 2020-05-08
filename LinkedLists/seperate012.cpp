// Given a linked list of 0s, 1s and 2s, task is to segregate these values
// 0 1 0 2 2 1
// 0 0 1 1 2 2

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

Node* segregate(struct Node *head) {
    if (!head || !(head->next))
        return head;
  
    // Create three dummy nodes to point to 
    // beginning of three linked lists. These 
    // dummy nodes are created to avoid many 
    // null checks. 
    Node* zeroD = new Node(0); 
    Node* oneD = new Node(0); 
    Node* twoD = new Node(0); 
  
    // Initialize current pointers for three 
    // lists and whole list. 
    Node* zero = zeroD, *one = oneD, *two = twoD; 
  
    // Traverse list 
    Node* curr = head; 
    while (curr) { 
        if (curr->data == 0) { 
            zero->next = curr; 
            zero = zero->next; 
            curr = curr->next; 
        } else if (curr->data == 1) { 
            one->next = curr; 
            one = one->next; 
            curr = curr->next; 
        } else { 
            two->next = curr; 
            two = two->next; 
            curr = curr->next; 
        } 
    } 
  
    // Attach three lists 
    zero->next = (oneD->next) ? (oneD->next) : (twoD->next); 
    one->next = twoD->next; 
    two->next = NULL; 
  
    // Updated head 
    head = zeroD->next; 
    // Delete dummy nodes 
    delete zeroD; 
    delete oneD; 
    delete twoD; 
  
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
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            head = Insert(head, x);

        }
        head = segregate(head);
        Display(head);
    }

    return 0;
}
