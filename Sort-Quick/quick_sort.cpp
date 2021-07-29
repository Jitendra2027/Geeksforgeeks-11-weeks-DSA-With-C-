#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void swap(int *m,int *n)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[],int low,int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int arr[]={3,34,2,13,35,6,78};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sorting:";
    printArray(arr,n);
    quickSort(arr,0,n-1);
    cout<<"\nArray after sorting:";
    printArray(arr,n);
    return 0;
}
