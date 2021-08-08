#include<bits/stdc++.h>
using namespace std;
string find_col(int n)
{
    string s="";
    while(n>0)
    {
        int rem=n%26;
        if(rem==0)
        {
            s+='Z';
            n=n/26-1;
        }
        else
        {
            s+=(rem-1)+'A';
            n=n/26;
        }

    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Column name is: "<<find_col(n);
    return 0;
}

