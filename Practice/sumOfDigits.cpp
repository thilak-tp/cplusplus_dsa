// A program to calculate the sum of digit of a number
#include<iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum=0,digit;
    while(num>0)
    {
        digit = num % 10;
        num /= 10;
        sum += digit;

    }
    return sum;

}

int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    cout<<"Sum of digits of "<<num<<" is "<<sumOfDigits(num)<<endl;
        
    return 0;
}

