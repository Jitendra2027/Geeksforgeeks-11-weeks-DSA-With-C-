#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*start;
void insert();
void display(struct node* head);
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;
    while(t--)
    {
        start=NULL;
        insert();
        display(start);
        cout<<"\n";
    }
    return 0;
}
void insert()
{
    int n,value,i;
    cout<<"Enter number of nodes:";
    cin>>n;
    struct node* temp;
    for(i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start=(struct node*)malloc(sizeof(struct node));
            start->data=value;
            start->next=NULL;
            temp=start;
            continue;
        }
        else
        {
            temp->next=(struct node*)malloc(sizeof(struct node));
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void display(struct node *head)
{
   while(head!=NULL)
   {
       cout<<head->data<<" ";
       head=head->next;
   }
}
