#include<bits/stdc++.h>
using namespace std;
char mostOccurrence(string str)
{
    int len=str.length();
    int max_char=1,occ=1;
    sort(str.begin(),str.end());
    char result=str[0];
    for(int i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
        {
            occ++;
            if(occ>max_char)
            {
                result=str[i];
                max_char=occ;
            }
            else
                occ=1;
        }
    }
    return result;
}
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    char res=mostOccurrence(str);
    cout<<"Most occurring character is: "<<res;
    return 0;
}
