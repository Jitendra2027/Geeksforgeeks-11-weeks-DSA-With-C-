//Method 1 : using while loop iteration
//more time complex, time complexity o(digits_count)
#include<iostream>
using namespace std;

int find_digits(int n){
    int digit_count=0;
    while(n!=0){
        digit_count+=1;
        n/=10;
    }
    return digit_count;
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
