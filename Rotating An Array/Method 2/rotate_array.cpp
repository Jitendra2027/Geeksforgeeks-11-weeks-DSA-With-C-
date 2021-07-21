#include <bits/stdc++.h>
#include<cstdio>
using namespace std;

void reverse_array(int arr[],int s,int e)
{
    int l=s,r=e;
    int temp;
    while(l<=r)
    {
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}
void leftrotate(int arr[],int n,int k)
{
    if(n==0)
        return;
    k=k%n;
    reverse_array(arr,0,k-1);
    reverse_array(arr,k,n-1);
    reverse_array(arr,0,n-1);
}
int main()
{
    int n,k;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter number of rotations:";
    cin>>k;
    leftrotate(arr,n,k);
    printf("Array after %d rotations:",k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
