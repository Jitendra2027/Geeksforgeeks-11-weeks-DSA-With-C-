#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printList(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
struct Node* deleteMiddle(struct Node* head)
{
   if (head == NULL)
        return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    // Initialize slow and fast pointers
    // to reach middle of linked list
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    // Find the middle and previous of middle.
// To store previous of slow_ptr
struct Node* prev;
    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        fast_ptr = fast_ptr->next->next;
        prev = slow_ptr;
        slow_ptr = slow_ptr->next;
    }

    // Delete the middle node
    prev->next = slow_ptr->next;
    delete slow_ptr;

    return head;
}
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;

    while(t--)
    {
        struct Node* temp,*head=NULL;
        cout<<"Enter number of nodes:";
        int n,m;
        cin>>n;
        cout<<"Enter data:";
        cin>>m;
        head=new Node(m);
        temp=head;
        for(int i=0;i<n-1;i++)
        {
            cin>>m;
            temp->next=new Node(m);
            temp=temp->next;
        }
        head=deleteMiddle(head);
        printList(head);
    }
    return 0;
}
