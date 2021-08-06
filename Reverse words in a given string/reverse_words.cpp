#include<bits/stdc++.h>
using namespace std;
string reverse_words(string s)
{
        vector<string> tmp;
        string str = "";
        string result="";
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '.')
            {
                tmp.push_back(str);
                str = "";
            }

            // Else add character to
            // str to form current word
            else
                str += s[i];
        }

        tmp.push_back(str);

        int i;
        for (i = tmp.size() - 1; i > 0; i--)
            result+=tmp[i]+".";
        result+=tmp[0];
        return result;
}
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    string s=reverse_words(str);
    cout<<"String after reversing it's words: "<<s;
    return 0;
}
