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
void loopHere(struct Node* head,struct Node* tail,int position)
{
    if(position==0) return;
    struct Node* walk=head;
    for(int i=1;i<position;i++)
        walk=walk->next;
    tail=tail->next;
}
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* s_pointer=head;
        Node* f_pointer=head;
        while(s_pointer && f_pointer &&  f_pointer->next)
        {
            s_pointer=s_pointer->next;
            f_pointer=f_pointer->next->next;
            if(s_pointer==f_pointer)
                return true;
        }
        return false;
    }
};
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;
    while(t--)
    {
        int n,num;
        cout<<"Enter number of nodes:";
        cin>>n;
        struct Node* head,*tail;
        cout<<"Enter data:";
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++)
        {
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        int pos;
        cout<<"Enter position:";
        cin>>pos;
        loopHere(head,tail,pos);
        Solution obj;
        if(obj.detectLoop(head))
            cout<<"True\n";
        else
            cout<<"False\n";
    }
    return 0;
}
