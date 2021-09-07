#include<bits/stdc++.h>
using namespace std;
string findWinner(string s);
int main()
{
    int t;
    cout<<"Enter test cases:";
    cin>>t;
    while(t--)
    {
        string s;
        cout<<"Enter string:";
        cin>>s;
        cout<<"Winner is: "<<findWinner(s);
    }
}
string findWinner(string s)
{
    // Your code goes here
    int i, count = 0, n;
    n = s.length();
    stack<char> st;


    for (i = 0; i < n; i++) {
        if (st.empty() || st.top() != s[i]) {
            st.push(s[i]);
        }
        else {
            count++;
            st.pop();
        }
    }

    // Check who has won
    if (count % 2 == 0) {
        return "Pippin";
    }
    else {
        return "Merry";
    }
}
