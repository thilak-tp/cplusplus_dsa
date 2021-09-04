// A program to check whether a number is a strong number or not.
// A number whose sum of factorial of its digits gives the number itself
#include<iostream>
using namespace std;

int factorial(int num)
{   int fact=1;
    for(int i=1; i<=num;i++)
        fact = fact*i;
    return fact;
}

bool isStrong(int num)
{
    int digit, sum=0,realNum;
    realNum = num;
    while(num>0)
    {
        digit = num%10;
        sum = sum + factorial(digit);
        num/=10;
    }
    cout<<"sum = "<<sum<<endl;
    if(realNum == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;
    cout<<factorial(0)<<endl;
    if(isStrong(num))
        cout<<num<<" is a strong number.\n";
    else
        cout<<num<<" is not a strong number.\n";
    return 0;
}

