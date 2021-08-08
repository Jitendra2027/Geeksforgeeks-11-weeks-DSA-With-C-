#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
int leaf_sum(node *root)
{
    static int sum=0;
    if(!root)
        return 0;
    if(!root->left && !root->right)
    {
        cout<<"Leaf node's data is: "<<root->data<<"\n";
        sum+=root->data;
    }
    leaf_sum(root->left);
    leaf_sum(root->right);
    return sum;
}
node* newNode()
{
    node* Node = new node();
    cout<<"Enter the data(enter -1 for termination or no node):";
    cin>>Node->data;
    if(Node->data==-1)
        return 0;
    cout<<"Enter the left child of "<<Node->data<<":";
    Node->left=newNode();
    cout<<"Enter the right child of "<<Node->data<<":";
    Node->right=newNode();
    return(Node);
}
int main()
{
    node *root=new node();
    root=newNode();
    cout<<"Sum of the leaf nodes is: "<<leaf_sum(root);
    return 0;
}

