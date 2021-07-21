//Rearrange an array so that arr[i] becomes arr[arr[i]] with O(1) extra space
//For example:-Input: arr[]  = {3, 2, 0, 1} --> Output: arr[] = {1, 0, 3, 2}

#include<iostream>
using namespace std;

void rearrange(int arr[],int n)
{   for(int i=0;i<n;i++)
        arr[i]+=(arr[arr[i]]%n)*n;
    for(int i=0;i<n;i++)
        arr[i]=arr[i]/n;
}
int main()
{
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Before rearrangement:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    rearrange(arr,n);
    cout<<"\nAfter rearrangement:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
