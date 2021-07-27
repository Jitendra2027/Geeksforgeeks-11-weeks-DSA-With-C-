// Solution : Use Hashing We can create a auxiliary array to count the elements in the Array.
// We traverse the auxiliary array for finding out missing and repeating number in the array.
// Time complexity: o(n) space: o(n)

#include<bits/stdc++.h>
using namespace std;

void missingRepeating(int arr[],int n)
{
    int temp[n+1]={0};
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]+=1;
    }
    for(int i=1;i<n+1;i++)
    {
        if(temp[i]==0)
            printf("Missing element is %d",i);
        if(temp[i]==2)
            printf("\nRepeating element is %d",i);
    }
}
int main()
{
    int arr[]={4,6,1,3,6,2};
    int n=sizeof(arr)/sizeof(int);
    missingRepeating(arr,n);
    return 0;
}
