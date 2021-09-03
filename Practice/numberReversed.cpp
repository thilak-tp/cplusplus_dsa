// A program to reverse a number
#include<iostream>
using namespace std;

int numReverse(int num)
{
    int reversed=0,digit;
    while(num>0)
    {
        digit = num%10;
        reversed = reversed * 10 + digit;
        num/=10;
    }

    return reversed;

}

int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    cout<<num<<" when reversed is "<<numReverse(num)<<endl;
        
    return 0;
}

