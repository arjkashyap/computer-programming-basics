// Find the point of intersection of two linked list
// This has to be done in O(m + n) time 
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int intersectPoint(struct Node* head1, struct Node* head2);

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;

        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }

        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;

        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends

int getIntersection(int c, Node* h1, Node* h2)
{
    for(int i = 0; i < c; i++){
        if( h1 == nullptr )
            return -1;
        h1 = h1 -> next;
    }
    while( h1 && h2 ){
        if( h1 == h2 )
            return h1 -> data;
        h1 = h1 -> next;
        h2 = h2 -> next;
    }
    return -1;
}

int intersectPoint(Node* head1, Node* head2)
{
    int l1 = 0, l2 = 0;
    Node* ptr = head1;
    while( ptr -> next ){
        l1++;
        ptr = ptr -> next;
    }
    ptr = head2;
    while( ptr -> next ){
        l2++;
        ptr = ptr -> next;
    }
    
    int c = abs( l1 - l2 );
    if( l1 > l2 )
        return getIntersection(c, head1, head2);
    else
        return getIntersection(c, head2, head1);
    
    
}

