#include<bits/stdc++.h>
using namespace std;

// Function for finding first and last occurrence
// of an elements
int findfirstoccurence(int arr[],int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x && (mid==0 || arr[mid-1]!=x)) return mid;
        else if(arr[mid]>x) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int findlastoccurence(int arr[],int n,int x)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x && (mid==n-1 || arr[mid+1]!=x)) return mid;
        else if(arr[mid]>x) r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    int x = 8;
    int first=findfirstoccurence(arr,n,x);
    printf("First occurrence of %d is: %d",x,first+1);
    int last=findlastoccurence(arr,n,x);
    printf("\nLast occurrence of %d is: %d",x,last+1);
    return 0;
}
// We count the frequency of a number by this method(last-first+1)
