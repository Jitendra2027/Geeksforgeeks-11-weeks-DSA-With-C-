// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts
// the given array. The functions should put all 0s first, then all 1s and all 2s in last.
// Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.

#include<bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
{
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        switch(a[i])
        {
            case 0:
                c1++;
                break;
            case 1:
                c2++;
                break;
            case 2:
                c3++;
                break;
        }
    }
    int i=0;
    while(c1>0)
        {
            a[i++]=0;
            c1--;
        }
    while(c2>0)
    {
            a[i++]=1;
            c2--;
    }
    while(c3>0)
        {
            a[i++]=2;
            c3--;
        }
}
int main()
{
    int a[]={2,1,0,2,0,1,1,1,0,2,0,2,2,0,0};
    int n=sizeof(a)/sizeof(a[0]);
    sort012(a,n);
    cout<<"Array after sorting is: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" " ;
    return 0;
}
