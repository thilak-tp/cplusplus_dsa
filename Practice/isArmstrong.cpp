// A program to check whether a number is an armstrong number or not
// A number whose sum of cube of digits is equal to the number itself.
#include<iostream>
using namespace std;

int cube(int num)
{
    return (num*num*num);
}
bool isArmstrong(int num)
{
    int digit,realNum,sum=0;
    realNum = num;
    
    while(num>0)
    {
        digit = num%10;
        sum = sum+cube(digit);
        num/=10;
    }

    if(sum == realNum)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(isArmstrong(num))
        cout<<num<<" is an Armstrong number.\n ";
    else
        cout<<num<<" is not an Armstrong number.\n";
    return 0;
}

