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
struct Node* buildList(int size)
{
    int val;
    cout<<"Enter node data:";
    cin>>val;
    struct Node* head=new Node(val);
    struct Node* tail=head;
    for(int i=0;i<size-1;i++)
    {
        cin>>val;
        tail->next=new Node(val);
        tail=tail->next;
    }
    return head;
}
void printList(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
class Solution
{
    public:
    struct Node *reverse (struct Node *head, int k)
    {
        // Complete this method
        if(head==NULL)
            return NULL;
        struct Node* current=head;
        struct Node* next=NULL,*prev=NULL;
        int count=0;
        while(current!=NULL && count<k)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        if(next!=NULL)
            head->next=reverse(next,k);
        return prev;
    }
};
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;
    while(t--)
    {
        int n,m,s;
        cout<<"Enter size of the linked list:";
        cin>>n;
        struct Node* first=buildList(n);
        cout<<"Enter group size:";
        cin>>s;
        Solution obj;
        struct Node* res=obj.reverse(first,s);
        printList(res);
    }
    return 0;
}

