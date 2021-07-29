#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(n<=0)
        cout<<"Enter positive integer number!";
    int result=1,i=1;
    while(result<=n)
    {
        i++;
        result=i*i;
    }
    cout<<floor(i-1);
    return 0;
}
