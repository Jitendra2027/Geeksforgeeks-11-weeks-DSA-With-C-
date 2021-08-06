#include<bits/stdc++.h>
using namespace std;
bool areAnagram(string str1,string str2){
    int m=str1.size();
    int n=str2.size();
    if(m!=n)
        return false;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<m;i++)
        if(str1[i]!=str2[i])
            return false;
    return true;
}
int main()
{
    string str1;
    string str2 ;
    cout<<"Enter first string:";
    cin>>str1;
    cout<<"Enter second string:";
    cin>>str2;
    if (areAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";

    return 0;
}

