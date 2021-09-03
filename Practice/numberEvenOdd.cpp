// A program to check whether a number is even or odd
#include<iostream>
using namespace std;

bool isEvenOrOdd(int num)
{
    if(num%2==0)
        return 1;
    else 
        return 0;
}
int main()
{
    int num;

    cout<<"Enter a number\n";
    cin>>num;
    
    if(isEvenOrOdd(num))
        cout<<num<<" is an even number\n";
    else
        cout<<num<<" is an odd number.\n";

    return 0;
}
