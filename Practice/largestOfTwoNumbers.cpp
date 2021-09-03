// A program to find largest of two numbers using if-else
#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter 2 numbers\n";
    cin>>num1>>num2;

    if(num1>num2)
        cout<<num1<<" is greater than "<<num2<<endl;
    else if(num1 < num2)
        cout<<num2<<" is greater than "<<num1<<endl;
    else
        cout<<num1<<" is equal to "<<num2<<endl;
        
    return 0;
}

