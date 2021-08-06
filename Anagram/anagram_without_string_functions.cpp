#include<bits/stdc++.h>
using namespace std;
bool areAnagram(char a[], char b[]){

    int acount[256]={0};
    int bcount[256]={0};
    int i;
    for(i=0;a[i]&&b[i];i++)
    {
        acount[a[i]]++;
        bcount[b[i]]++;
    }
    if(a[i]||b[i])
        return false;
    for (i = 0; i < 256; i++)
        if (acount[i] != bcount[i])
            return false;
    return true;
}
int main()
{
    char str1[1000];
    char str2[1000];
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
