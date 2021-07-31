#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(int arr1[],int arr2[],int n,int m)
{
    int max=0;
        if(arr1[n-1]>arr2[m-1])
            max=arr1[n-1];
        else
            max=arr2[m-1];
        int temp[max+1]={0};
        vector<int> result;
        result.push_back(arr1[0]);
        temp[arr1[0]]++;
        for(int i=1;i<n;i++)
        {
            if(arr1[i]!=arr1[i-1]){
                result.push_back(arr1[i]);
                temp[arr1[i]]++;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(temp[arr2[j]]==0)
            {
                result.push_back(arr2[j]);
                temp[arr2[j]]++;
            }
        }
        sort(result.begin(),result.end());
        return result;
}
int main()
{
    int a[]={2, 2, 3, 4, 5,6,10,34};
    int b[]={1, 1, 2, 3, 4,4,12};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    vector<int>result=unionArray(a,b,n1,n2);
    cout<<"Array after union: ";
    for(int i:result)cout<<i<<" ";
    return 0;
}
