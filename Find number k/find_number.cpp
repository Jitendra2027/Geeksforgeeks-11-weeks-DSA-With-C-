//Smallest number k such that the product of digits of k is equal to n.
//Given a non-negative number n. The problem is to find the smallest number k such that
//the product of digits of k is equal to n. If no such number k can be formed then print “-1”.

//Input : 100 --> Output : 455
//4*5*5 = 100 and 455 is the smallest possible number.

#include<iostream>
#include<stack>
using namespace std;
string find_smallest_number(int n){
    stack <int> digits;
    if(n<0)
        return to_string(-1);

    if(n>=1&&n<=9)
        return to_string(n);
    long long int k=0;
     for (int i=9; i>=2 && n > 1; i--)
    {
        while (n % i == 0)
        {
            digits.push(i);
            n = n / i;
        }
    }
    if(n!=1)
        return to_string(-1);
    while (!digits.empty())
    {
        k = k*10 + digits.top();
        digits.pop();
    }
    return to_string(k);
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    string res=find_smallest_number(n);
    cout<<res;
    return 0;
}
