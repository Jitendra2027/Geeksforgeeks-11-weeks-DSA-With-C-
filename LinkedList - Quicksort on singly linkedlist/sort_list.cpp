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
struct Node* getTail(struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}
struct Node* partition(struct Node* head,struct Node* end,struct Node** newHead,struct Node**newEnd)
{
    struct Node* pivot = end;
    struct Node *prev = NULL, *cur = head, *tail = pivot;
    while (cur != pivot) {
        if (cur->data < pivot->data) {
            // First node that has a value less than the
            // pivot - becomes the new head
            if ((*newHead) == NULL)
                (*newHead) = cur;

            prev = cur;
            cur = cur->next;
        }
        else // If cur node is greater than pivot
        {
            // Move cur node to next of tail, and change
            // tail
            if (prev)
                prev->next = cur->next;
            struct Node* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }
    // If the pivot data is the smallest element in the
    // current list, pivot becomes the head
    if ((*newHead) == NULL)
        (*newHead) = pivot;

     //update newEnd by last node
    (*newEnd) = tail;
    return pivot;
}
struct Node* quickSortRecur(struct Node* head, struct Node* end)
{
    if(!head || head==end)
        return head;
    Node *newHead = NULL, *newEnd = NULL;
    struct Node* pivot = partition(head, end, &newHead, &newEnd);

    // If pivot is the smallest element - no need to recur
    // for the left part.
    if (newHead != pivot) {
        // Set the node before the pivot node as NULL
        struct Node* tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;

        // Recur for the list before pivot
        newHead = quickSortRecur(newHead, tmp);

        // Change next of last node of the left half to
        // pivot
        tmp = getTail(newHead);
        tmp->next = pivot;
    }
    pivot->next=quickSortRecur(pivot->next,newEnd);
    return newHead;
}
void quickSort(struct Node** headRef)
{
    (*headRef)
        = quickSortRecur(*headRef, getTail(*headRef));
    return;
}
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
        struct Node* head=buildList(n);
        quickSort(&head);
        printList(head);
    }
    return 0;
}

