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
Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    struct Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    if(pos==1)
    {
        struct Node* del=head;
        head=head->next;
        temp->next=head;
        delete del;
    }
    else
    {
        struct Node* tillPos=head;
        for(int i=1;i<pos-1;i++)
        {
            tillPos=tillPos->next;
        }
        struct Node* del=tillPos->next;
        tillPos->next=tillPos->next->next;
        delete del;
    }
    return head;
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
void makeCircular(struct Node* head)
{
    struct Node* temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=head;
}
int main()
{
    int n;
    cout<<"Enter number of test cases:";
    cin>>n;

    while(n--)
    {
        struct Node* head=NULL,*tail=NULL;
        cout<<"Enter number of nodes:";
        int n;
        cin>>n;
        int x;
        cout<<"Enter data:";
        cin>>x;
        head=new Node(x);
        tail=head;
        for(int i=0;i<n-1;i++)
        {
            cin>>x;
            tail->next=new Node(x);
            tail=tail->next;
        }
        makeCircular(head);
        int pos;
        cout<<"Enter position:";
        cin>>pos;
        head=deleteAtPosition(head,pos);
        printList(head);
        cout<<endl;
    }
    return 0;
}
