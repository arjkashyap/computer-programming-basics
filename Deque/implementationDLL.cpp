// Doubly Linked LIst Implementing push, pop functions in a dequeue
// Using arrays

#include<iostream>

using namespace std;

class ListNode
{
    public:
        int val;
        ListNode* prev;
        ListNode* next;

        ListNode(int x)
        {
            val = x;
            prev = nullptr;
            next = nullptr;
        }
};

class Deque
{
    public: 
        ListNode* head;
        ListNode* tail;
        Deque()
        {
            head = nullptr;
            tail = nullptr;
        }
        void insertFront(int);
        void insertRear(int);
        void deleteFront();
        void deleteRear();
        void display();
};


// Insert elements at the front of the deque
void Deque::insertFront(int x)
{
    if(head == nullptr && tail == nullptr)
    {
        head = new ListNode(x);
        tail = head;
        return;
    }

    ListNode* tmp = head;
    head = new ListNode(x);
    head -> next = tmp;
    tmp -> prev = head;
}

// Insert element at the back of the deque
void Deque::insertRear(int x)
{
    if(head == nullptr && tail == nullptr)
    {
        head = new ListNode(x);
        tail = head;
        return;
    }
    ListNode* tmp = tail;
    tail -> next = new ListNode(x);
    tail = tail -> next;
    tail -> prev = tmp;
}

void Deque::deleteFront()
{
    if(head == nullptr)
        return;
    ListNode* tmp = head;
    head = head -> next;
    head -> prev = nullptr;
    free(tmp);
}

void Deque::deleteRear()
{
    if(tail == nullptr)
        return;
    ListNode* tmp = tail;
    tail = tail -> prev;
    tail -> next = nullptr;
    free(tmp);
}

void Deque::display()
{
   ListNode* ptr = head;
   while(ptr != nullptr)
   {
        cout << ptr -> val << " ";
        ptr = ptr -> next;
    }
    cout << endl;
}

int main()
{
    Deque dq;
    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertRear(30);
    dq.insertRear(40);
    dq.insertFront(50);
    dq.display();
    dq.deleteFront();
    dq.deleteRear();
    dq.display();
    return 0;
}

