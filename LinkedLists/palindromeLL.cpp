// Check if the given linked list is palindrome or not

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

bool isPalindrome(Node* head)
{
    int n = 0;
    std::stack<int> s;
    Node *ptr = head;
    while(ptr != nullptr)
    {
        ptr = ptr -> next;
        n++;
    }
    ptr = head;
    int i = 0;
    int mid = n / 2;
    while(i < mid ){
        s.push(ptr -> data);
        ptr = ptr -> next;
        i++;
    }

    ptr = (n % 2) == 0 ? ptr : ptr ->  next;

    while(ptr != nullptr){
        if( ptr -> data != s.top() )
            return false;
        s.pop();
        ptr = ptr -> next;
    }
    return true;
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
        std::cout << isPalindrome(head) << "\n";
    }

    return 0;
}
