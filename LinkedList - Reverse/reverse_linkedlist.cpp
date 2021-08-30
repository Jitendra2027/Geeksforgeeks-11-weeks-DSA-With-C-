#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class solution
{
    public:
    struct node* reverselist(struct node *head)
    {
        struct node* current=head;
        struct node* next=NULL;
        struct node* prev=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
    }

};
void printList(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int t,n,firstdata,l;
    cout<<"Enter test cases:";
    cin>>t;
    while(t--)
    {
        struct node* head=NULL, *tail=NULL;
        cout<<"Enter number of nodes:";
        cin>>n;
        cin>>firstdata;
        head=new node(firstdata);
        tail=head;
        for(int i=1;i<n;i++)
        {
            cin>>l;
            tail->next=new node(l);
            tail=tail->next;
        }
        solution obj;
        head=obj.reverselist(head);
        printList(head);
        cout<<endl;
    }
    return 0;
}
