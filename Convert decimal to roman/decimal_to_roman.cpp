#include<bits/stdc++.h>
using namespace std;
void decToRoman(int n)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    while(n>0)
    {
      int div = n/num[i];
      n = n%num[i];
      while(div--)
      {
        cout<<sym[i];
      }
      i--;
    }
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    decToRoman(n);
    return 0;
}
