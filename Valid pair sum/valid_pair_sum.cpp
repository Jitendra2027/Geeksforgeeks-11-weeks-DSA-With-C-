#include<bits/stdc++.h>
using namespace std;
void find_pairs(int arr[],int n)
{
    int l=0,r=n-1;
    int ans=0;
    sort(arr,arr+n);
    while(l<=r)
    {
        if(arr[l]+arr[r]>0)
        {
            ans=ans+(r-l);
            r--;
        }
        else
            l++;
    }
    cout<<"Number of pairs are: "<<ans;
}
int main()
{
    int arr[]={-4,4,8,-5,3,6};
    int n=sizeof(arr)/sizeof(int);
    find_pairs(arr,n);
    return 0;
}
