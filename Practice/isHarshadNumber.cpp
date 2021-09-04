// A program to check whether a number is harshad number/ niven number or not
// A Harshad number is a number which is divisible by the sum of its digits.
#include<iostream>
using namespace std;
int digitSum(int num)
{   
    int digit,sum=0;
    while(num>0)
    {
        digit = num%10;
        sum = sum +digit;
        num/=10;
    }
    return sum;
}
bool isHarshad(int num)
{
    if(num%digitSum(num)==0)
        return 1;
    else
        return 0;

}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(isHarshad(num))
        cout<<num<<" is a Harshad number.\n";
    else
        cout<<num<<" is not a Harshad number.\n";
    return 0;
}

