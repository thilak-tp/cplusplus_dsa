//A program to demostrate the making a user-defined headerfile
#include "thilak.h" // This is the custom headfile that contains the sum funstion
#include<iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    cout<<"Enter number 1: \n";
    cin>>num1;
    cout<<"Enter number 2: \n";
    cin>>num2;

    result = sum(num1, num2);
    cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;
    return 0;

}