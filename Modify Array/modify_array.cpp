#include<iostream>
using namespace std;
void newArray(int arr[],int n)
{
    if(n<=1)
        return ;
    int prev=arr[0];
    arr[0]=arr[0]*arr[1];
    for(int i=1;i<n-1;i++)
    {
        int curr=arr[i];
        arr[i]=arr[i+1]*prev;
        prev=curr;
    }
    arr[n-1]=arr[n-1]*prev;
}
int main()
{
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    newArray(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
