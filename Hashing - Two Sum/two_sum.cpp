#include<bits/stdc++.h>
using namespace std;
void find_pair(int arr[],int n,int x)
{
    unordered_set<int> s;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(x-arr[i])!=s.end())
        {
            cout<<"pair is: "<<arr[i]<<" and "<<(x-arr[i]);
            flag=1;
        }
        s.insert(arr[i]);
    }
    if(flag==0)
        cout<<"No such pair found";
}
int main()
{
    int n,x;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter integer:";
    cin>>x;
    find_pair(arr,n,x);
    return 0;
}
