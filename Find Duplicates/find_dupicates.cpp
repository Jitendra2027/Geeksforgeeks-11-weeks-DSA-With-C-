// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

// Function to print duplicates
void printRepeating(int arr[], int size)
{
    int i;
    cout << "The repeating elements are:" << endl;
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }
}

// Driver Code
int main()
{
    int arr[] = { 1, 5, 5, 1, 3, 6, 6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, arr_size);
    return 0;
}
