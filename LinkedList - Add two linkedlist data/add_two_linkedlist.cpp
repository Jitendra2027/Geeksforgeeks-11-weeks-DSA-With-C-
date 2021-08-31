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
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        int carry=0,sum;
        struct Node* res=NULL,*prev=NULL;
        struct Node* temp;
        first=reverseList(first);
        second=reverseList(second);
        while(first!=NULL || second!=NULL)
        {
            sum = carry + (first ? first->data : 0)
              + (second ? second->data : 0);

        // update carry for next calculation
        carry = (sum >= 10) ? 1 : 0;

        // update sum if it is greater than 10
        sum = sum % 10;

        // Create a new node with sum as data
        temp = new Node(sum);

        if (res == NULL)
            res = temp;


        else
            prev->next = temp;

        // Set prev for next insertion
        prev = temp;

        if (first)
            first = first->next;
        if (second)
            second = second->next;
        }
        if (carry > 0)
            temp->next =new Node(carry);
        struct Node* final= reverseList(res);
        return final;

    }
    struct Node* reverseList(struct Node* head)
    {
        struct Node* prev=NULL;
        struct Node* next=NULL;
        struct Node* curr=head;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
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
        int n,m;
        cin>>n;
        struct Node* first=buildList(n);
        cin>>m;
        struct Node* second=buildList(m);
        Solution obj;
        struct Node* res=obj.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
