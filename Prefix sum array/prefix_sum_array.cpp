// The prefix sum array of any array, arr[] is defined as an array of same size say,
// prefixSum[] such that the value at any index i in prefixSum[] is sum of all elements
// from indexes 0 to i in arr[].


// with this we can find the sum of items in given range
#include <iostream>
using namespace std;

void fillPrefixSum(int arr[], int N, int prefixSum[])
{
    prefixSum[0] = arr[0];

    // Adding present element
    // with previous element
    for (int i = 1; i < N; i++)
        prefixSum[i] = prefixSum[i-1] + arr[i];
}
int rangesum(int prefixsum[],int i,int j)
{
    return prefixsum[j]-prefixsum[i];
}
int main()
{
    int n;
    cout<<"Enter size of the array:";
    cin>>n;
    int arr[n];
    int prefixsum[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    fillPrefixSum(arr,n,prefixsum);
    for(int i=0;i<n;i++)
        cout<<prefixsum[i]<<" ";
    cout<<"\nEnter range:";
    int i,j;
    cin>>i>>j;
    cout<<"sum of given range: "<<rangesum(prefixsum,i,j);
}
