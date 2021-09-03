// A program to check whether a number is positive or negativeS
#include<iostream>
using namespace std;

bool isPostiveOrNegative(int num)
{
    if(num>0)
        return 1;
    else 
        return 0;
}
int main()
{
    int num;

    cout<<"Enter a number\n";
    cin>>num;
    if(num == 0)
    {
        cout<<" 0 is neither a Positive number nor a Negative number!";
        exit(0);
    }
    if(isPostiveOrNegative(num))
        cout<<num<<" is a Positive number.\n";
    else
        cout<<num<<" is a Negative number.\n";

    return 0;
}
