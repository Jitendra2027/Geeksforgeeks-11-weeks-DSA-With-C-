#include<bits/stdc++.h>
using namespace std;
string find_missing_characters(string str)
{
    bool present[26]={false};
    string res="";
    int flag=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            present[str[i]-'a']=true;
        else if(str[i]>='A' && str[i]<='Z')
            present[str[i]-'A']=true;
    }
    for(int i=0;i<26;i++)
    {
        if(present[i]==false)
        {
            res.push_back((char)(i+'a'));
            flag=1;
        }

    }
    if(flag==0)
        return "-1";
    return res;
}
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    string res=find_missing_characters(str);
    cout<<"Missing characters are: "<<res;
    return 0;
}
