#include<iostream>
using namespace std;
void findpeak(int arr[],int n)
{
    cout<<"Peak elements are:";
    for(int i=0;i<n;i++)
    {
        if((arr[i]>=arr[i-1]) && (arr[i]>=arr[i+1]))
        {
            cout<<arr[i]<<" " ;
        }
    }
}
int main()
{
    int arr[]={30, 20, 15, 2, 23, 90, 100};
    int n=sizeof(arr)/sizeof(int);
    findpeak(arr,n);
    return 0;
}
