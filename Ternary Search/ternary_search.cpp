#include<iostream>
using namespace std;
int ternarysearch(int arr[],int l,int r,int key)
{
    if (r >= l)
    {
        // Find mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        // Check if key is present at any mid
        if (arr[mid1] == key)
        {
            return mid1;
        }
        if (arr[mid2] == key)
        {
            return mid2;
        }

        // Since key is not present at mid,
        // check in which region it is present
        // then repeat the Search operation
        // in that region
        if (key < arr[mid1])
        {

            // The key lies in between l and mid1
            return ternarysearch(arr,l,mid1-1,key);
        }
        else if (key > arr[mid2])
        {

            // The key lies in between mid2 and r
            return ternarysearch(arr,mid2+1,r,key);
        }
        else
        {

            // The key lies in between mid1 and mid2
            return ternarysearch(arr,mid1+1,mid2-1,key);
        }
    }

    // Key not found
    return -1;
}
int main()
{
    int n,key;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the key to be searched:";
    cin>>key;
    int result=ternarysearch(arr,0,n-1,key);
    if(result==-1)
        cout<<"Element not found in array!";
    else
        printf("Element found in array at %d position!",result+1);
    return 0;
}
