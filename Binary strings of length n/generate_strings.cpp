#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void generate_strings(int n,int arr[],int i)
{
    if(i==n)
    {
        printArray(arr,n);
        return ;
    }
    arr[i]=0;
    generate_strings(n,arr,i+1);

    arr[i]=1;
    generate_strings(n,arr,i+1);
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int arr[n];
    generate_strings(n,arr,0);
    return 0;
}
