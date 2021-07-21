#include <bits/stdc++.h>
#include<cstdio>
using namespace std;
void rotate(int arr[],int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
}
void rotateleft(int arr[],int n,int k)
{
    for(int i=0;i<k;i++)
        rotate(arr,n);
}
//Driver code
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
    rotateleft(arr,n,k);
    printf("Array after %d rotations:",k);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
