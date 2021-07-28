// We are given an array of distinct integers. We have to find the peak element
// ( The element which is greater than both the neighbours ). There can be many such elements we need to return any of them.
// Note: This program only finds a single peak element
// Time complexity: O(logn)
#include<iostream>
using namespace std;
void findpeak(int arr[],int n)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid]) &&
            (mid == n-1 || arr[mid+1] <= arr[mid]))
            {
                cout<<"Peak element is: "<<arr[mid];
                break;
            }
        else if(mid > 0 && arr[mid-1] > arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
}
int main()
{
    int arr[]={10, 20, 15, 2, 23, 90, 67};
    int n=sizeof(arr)/sizeof(int);
    findpeak(arr,n);
    return 0;
}
