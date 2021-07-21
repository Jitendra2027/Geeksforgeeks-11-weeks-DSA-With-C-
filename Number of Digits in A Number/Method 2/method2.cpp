// Log based C++ program to count number of
// digits in a number
// time complexity o(1), only one statement to calculate number of digits
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int find_digits(int n){
    return floor(log10(n)+1);
}
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    int res=find_digits(n);
    cout<<"Number of digits are: "<<res;
    return 0;

}
