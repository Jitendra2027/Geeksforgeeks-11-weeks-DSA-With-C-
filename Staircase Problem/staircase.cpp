// There are n stairs, a person standing at the bottom wants to reach the top.
// The person can climb either 1 stair or 2 stairs at a time. Count the number of ways,
// the person can reach the top.
// Recursive approach
#include<bits/stdc++.h>
using namespace std;
int count_ways(int n)
{
    if(n<=1)
        return n;
    return count_ways(n-1)+count_ways(n-2);
}
int return_ways(int n)
{
    return count_ways(n+1);
}
int main()
{
    int n;
    cout<<"Enter numbers of staircase: ";
    cin>>n;
    cout<<"Numbers of ways are: "<<return_ways(n);
    return 0;
}
