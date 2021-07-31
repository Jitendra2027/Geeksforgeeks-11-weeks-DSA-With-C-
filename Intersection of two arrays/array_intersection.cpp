#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(int arr1[],int arr2[],int n,int m)
{
        int i=0,j=0;
        vector<int> result;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
                i++;
            else if(arr1[i]>arr2[j])
                j++;
            else
            {
                result.push_back(arr2[j]);
                i++;
                j++;
            }
        }
        return result;
}
int main()
{
    int a[]={2, 2, 3, 4, 5,6,10,34};
    int b[]={1, 1, 2, 3, 4,4,12,5,34};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    vector<int>result=unionArray(a,b,n1,n2);
    cout<<"Array after union: ";
    for(int i:result)cout<<i<<" ";
    return 0;
}

