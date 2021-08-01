#include<bits/stdc++.h>
using namespace std;
float find_median(int arr[],int brr[],int n,int m)
{
    int i=0,j=0;
        int count;
        int m1=-1,m2=-1;
        if((m+n)%2!=0)
        {
            for(count=0;count<=(m+n)/2;count++)
            {
                if(i<n && j<m)
                {
                    m1=arr[i]<brr[j]?arr[i++]:brr[j++];
                }
                else if(i<n)
                    m1=arr[i++];
                else
                    m1=brr[j++];
            }
            return m1;
        }
        else
        {
            for(count=0;count<=(n+m)/2;count++)
            {
                m2=m1;
                if(i<n && j<m)
                {
                    m1=arr[i]<brr[j]?arr[i++]:brr[j++];
                }
                else if(i<n)
                    m1=arr[i++];
                else
                    m1=brr[j++];
            }
            return (m1+m2)/2.0;
        }
}
int main()
{
    int a[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11,9};
    int n1=sizeof(a)/sizeof(a[0]);
    int b[]={11, 12, 13, 14, 15, 16, 17, 18, 19};
    int n2=sizeof(b)/sizeof(b[0]);
    float result=find_median(a,b,n1,n2);
    cout<<"Median of the arrays is: "<<result;
    return 0;
}
