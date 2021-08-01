#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &arr,int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
int find_min_swaps(vector<int> arr)
{
      int ans = 0;
      vector<int>temp = arr;
      int N=arr.size();

      map <int, int> h;

      sort(temp.begin(), temp.end());
      for (int i = 0; i < N; i++)
      {
         h[arr[i]] = i;
      }
      for (int i = 0; i < N; i++)
        {
            if (arr[i] != temp[i])
            {
                ans++;
                int init = arr[i];

                swap(arr, i, h[temp[i]]);


                h[init] = h[temp[i]];
                h[temp[i]] = i;
            }
        }
        return ans;
}
int main()
{
    vector<int> a={101, 758, 315, 730, 472, 619, 460, 479};
    int result=find_min_swaps(a);
    cout<<"Minimum numbers of swaps to sort the array are: "<<result;
    return 0;
}
