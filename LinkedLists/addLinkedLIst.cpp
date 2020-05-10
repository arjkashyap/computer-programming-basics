// For given two linked list, add the numbers represented by them
// The result is the linked list which is sum of both the ll
/*ex:
 * 4 -> 5
 * 3 -> 4 -> 5
 *Addiing 
 *  4 5
 * 3 4 5
 * 3 9 0
 */


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
    if(!(head))
        std::cout<< "Empty List\n";

    while (head != nullptr)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << "\n";
}

Node* Reverse(Node* head)
{
    if(!(head))
        return nullptr;
    Node* p = nullptr;
    Node* curr = head;
    while(curr){
        Node* n = curr -> next;
        curr -> next = p;
        p = curr;
        curr = n;
    }
    return p;
}

Node* addTwoLists(Node* h1, Node* h2)
{
    // Reversing the linked lists
    Node* p1 = Reverse(h1);
    Node* p2 = Reverse(h2);
    Node* result = nullptr;
    int borrow = 0;
    Node* prev = nullptr;
    // Adding the linked lists
    while(p1 && p2){
        int sum = p1 -> data + p2 -> data;
        Node* newNode = new Node( (sum % 10) + borrow);
        if(prev == nullptr){
            result = newNode;
            prev = newNode;
        } else{
            prev -> next = newNode;
        }

        prev = newNode;
        borrow = ( sum / 10 != 0 ) ? 1 : 0;
        p1 = p1 -> next;
        p2 = p2 -> next;
    }
    // Remaining position for longer number
    while( p1 ){
        int sum = (p1 -> data) + borrow;
        borrow = ( sum / 10 != 0 ) ? 1 : 0;
        Node* newNode = new Node( sum % 10 );
        if(prev)
            prev -> next = newNode;
        prev = newNode;
        p1 = p1 -> next;
    }
    while( p2 ){
        int sum = (p2 -> data) + borrow;
        borrow = ( sum / 10 != 0 ) ? 1 : 0;
        Node* newNode = new Node( sum % 10 );
        if(prev)
            prev -> next = newNode;
        prev = newNode;
        p2 = p2 -> next;
    }

    return result;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    std::cin >> t;
    while (t--)
    {
        Node *h1 = nullptr;
        Node* h2 = nullptr;
        int n1, n2;
        std::cin >> n1;
        for (int i = 0; i < n1; i++)
        {
            int x;
            std::cin >> x;
            h1 = Insert(h1, x);

        }
        std::cin >> n2;
        for (int i = 0; i < n2; i++)
        {
            int x;
            std::cin >> x;
            h2 = Insert(h2, x);

        }
        Node* head = addTwoLists(h1, h2);
        Display(head);
    }

    return 0;
}
