#include<bits/stdc++.h>
using namespace std;
int maxLen(int a[],int n)
{
    unordered_map<int ,int> um;
    int sum=0;
    int max_len=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
            max_len=i+1;
        if(a[i]==0 && max_len==0)
            max_len=1;
        if(um.find(sum)!=um.end())
            max_len=max(max_len,i-um[sum]);
        else
            um[sum]=i;
    }
    return max_len;
}
int main()
{
    int arr[] = { 15, -2, 2, -8, 1, 7, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the longest 0 sum subarray is "
         << maxLen(arr, n);
    return 0;
}
