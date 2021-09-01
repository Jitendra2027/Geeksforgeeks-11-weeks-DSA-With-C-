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
struct Node* newNode(int key)
{
  struct Node* temp=new Node(key);
  return temp;
}
void printList(struct Node* head)
{
    struct Node* temp=head;
    if(head!=NULL)
    {
        do{
            printf("%d ",temp->data);
            temp=temp->next;
        }while(temp!=head);
        printf("\n");
    }
}
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
     Node *slow_ptr = head;
    Node *fast_ptr = head;

    if(head == NULL)
        return;

    /* If there are odd nodes in the circular list then
       fast_ptr->next becomes head and for even nodes
       fast_ptr->next->next becomes head */
    while(fast_ptr->next != head &&
          fast_ptr->next->next != head)
    {
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }

    /* If there are even elements in list
       then move fast_ptr */
    if(fast_ptr->next->next == head)
        fast_ptr = fast_ptr->next;

    /* Set the head pointer of first half */
    *head1_ref = head;

    /* Set the head pointer of second half */
    if(head->next != head)
        *head2_ref = slow_ptr->next;

    /* Make second half circular */
    fast_ptr->next = slow_ptr->next;

    /* Make first half circular */
    slow_ptr->next = head;
}
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;

    while(t--)
    {
        struct Node* temp,*head=NULL;
        struct Node* head1=NULL, *head2=NULL;
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
        temp->next=head;
        splitList(head,&head1,&head2);
        printList(head1);
        printList(head2);
    }
    return 0;
}
