#include<bits/stdc++.h>
using namespace std;
int findPivot(vector<int> vec,int low,int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (mid < high && vec[mid] > vec[mid + 1])
        return mid;

    if (mid > low && vec[mid] < vec[mid - 1])
        return (mid - 1);

    if (vec[low] >= vec[mid])
        return findPivot(vec, low, mid - 1);

    return findPivot(vec, mid + 1, high);
}
int binarySearch(vector<int> arr,int low,int high,int key)
{
    if (high < low)
        return -1;

    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid])
        return mid;

    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);

    // else
    return binarySearch(arr, low, (mid - 1), key);
}
int Search(vector<int> vec, int k) {
    //code here
    int len=vec.size();
    int low=0,high=len-1;
    int pivot=findPivot(vec,low,high);

    if (pivot == -1)
        return binarySearch(vec, 0, high, k);
    if (vec[pivot] == k)
        return pivot;
    if (vec[0] <= k)
        return binarySearch(vec, 0, pivot - 1, k);

    return binarySearch(vec, pivot + 1, high, k);
}

int main()
{
    vector<int> vec={ 5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key=8;
    int result=Search(vec,key);
    cout<<"Key element found at index: "<<result;
    return 0;
}
