#include<bits/stdc++.h>
using namespace std;
vector<int> printNonRepeated(int arr[],int n)
{
    vector<int> v;
    map<int,int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==1)
            v.push_back(arr[i]);
    }
    return v;
}
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector <int>v=printNonRepeated(arr,n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
