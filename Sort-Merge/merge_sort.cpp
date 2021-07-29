#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
void printArray(int *,int);
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
         int n2=r-m;
         int a[n1],b[n2];
         for(int i=0;i<n1;i++)
            a[i]=arr[l+i];
         for(int i=0;i<n2;i++)
            b[i]=arr[m+1+i];
         int i=0;
         int j=0;
         int k=l;
         while(i<n1 && j<n2)
         {
             if(a[i]<=b[j])
                arr[k++]=a[i++];
             else
                arr[k++]=b[j++];
         }
         while(i<n1)
         {
             arr[k++]=a[i++];
         }
         while(j<n2)
         {
             arr[k++]=b[j++];
         }
}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main()
{
    int arr[]={7,5,2,1,8,7,9,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting:";
    printArray(arr,n);
    mergeSort(arr,0,n-1);
    cout<<"\nArray after sorting:";
    printArray(arr,n);
    return 0;
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
