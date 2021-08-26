#include<bits/stdc++.h>
using namespace std;
vector<int> sortA1ByA2(int A1[],int N,int A2[],int M)
{
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<N;i++)
            m[A1[i]]++;
        for(int i=0;i<M;i++)
        {
            if(m[A2[i]]!=0)
            {
                for(int j=0;j<m[A2[i]];j++)
                    ans.push_back(A2[i]);
            }
            m.erase(A2[i]);
        }
        for(auto it:m)
        {
            for(int j=0;j<it.second;j++)
                ans.push_back(it.first);
        }
        return ans;
}
int main()
{
    int A1[] = { 2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8 };
    int A2[] = { 2, 1, 8, 3 };
    int n = sizeof(A1) / sizeof(A1[0]);
    int m = sizeof(A2) / sizeof(A2[0]);

    vector<int> v=sortA1ByA2(A1, n, A2, m);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
