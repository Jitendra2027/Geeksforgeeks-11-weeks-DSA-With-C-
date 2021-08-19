#include<bits/stdc++.h>
using namespace std;
bool check_equality(int A[],int B[],int N)
{
     map <int, int> m;
        for(int i=0;i<N;i++)
        {
            m[A[i]]++;
        }
        for(int i=0;i<N;i++)
        {
            // when an element is present in one but not in another
            if(m.find(B[i])==m.end())
                return false;
            // when count of occurrence of element is not same
            if(m[B[i]]==0)
                return false;
            m[B[i]]--;
        }
        return true;
}
int main()
{
     int arr1[] = { 3, 5, 2, 5, 2, 8, 20 };
     int arr2[] = { 2, 20, 3, 8, 5, 5, 2 };
     int n=sizeof(arr1)/sizeof(arr1[0]);
     bool flag=check_equality(arr1,arr2,n);
     if(flag)
        cout<<"Both arrays are equal.";
     else
        cout<<"Arrays are not equal.";
     return 0;
}
