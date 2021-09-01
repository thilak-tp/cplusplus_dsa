// A program to print the cube of a number

#include<iostream>
using namespace std;

float cube(int num);

int main()
{
    int num;

    cout<<"Enter a number to print its cube.\n";
    cin>>num;

    cout<<"Cube of "<<num<<" is "<<cube(num)<<endl;
    return 0;
}

float cube(int num)
{
    return (num*num*num);
}