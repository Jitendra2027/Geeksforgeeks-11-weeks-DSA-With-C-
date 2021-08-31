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
    //Function to add two numbers represented by linked list.
    struct Node* rotateClockwise(struct Node* head,int n,int k)
    {
        if(!head)
            return head;
        struct Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(k>n)
            k=k%n;
        k=n-k;
        if(k==0 || k==n)
            return head;
        struct Node* current=head;
        int cnt=1;
        while(cnt<k && current!=NULL)
        {
            current=current->next;
            cnt++;
        }
        if(current==NULL)
            return head;
        struct Node* kthnode=current;
        temp->next=head;
        head=kthnode->next;
        kthnode->next=NULL;
        return head;
    }
};
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;
    while(t--)
    {
        int n,k;
        cout<<"Enter number of elements in linked list:";
        cin>>n;
        struct Node* head=buildList(n);
        cout<<"Enter number of rotations:";
        cin>>k;
        Solution obj;
        struct Node* res=obj.rotateClockwise(head,n,k);
        printList(res);
    }
    return 0;
}
