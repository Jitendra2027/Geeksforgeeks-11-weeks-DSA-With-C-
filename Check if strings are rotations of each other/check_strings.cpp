#include<bits/stdc++.h>
using namespace std;
bool check_strings(string s1,string s2)
{
    queue<char> q1;
    queue<char> q2;
    for(int i=0;i<s1.length();i++)
        q1.push(s1[i]);
    for(int i=0;i<s2.length();i++)
        q2.push(s2[i]);
    int k=s2.length();
    while(k--)
    {
        char x=q2.front();
        q2.pop();
        q2.push(x);
        if(q1==q2)
            return true;
    }
    return false;
}
int main()
{
    string s1;
    cout<<"Enter first string:";
    cin>>s1;
    string s2;
    cout<<"Enter second string:";
    cin>>s2;
    bool res=check_strings(s1,s2);
    if(res)
        cout<<"Strings are rotations of each other.";
    else
        cout<<"Strings are not rotations of each other.";
    return 0;
}
