// A program to print the multiplication table of a given number

#include<iostream>
using namespace std;

int main()
{
    int num,i,multiple;

    cout<<"Enter a number to print its table.\n";
    cin>>num;

    for(i=1;i<=10;i++)
    {
        multiple = num * i;
        cout<<num<<" x "<<i<<" = "<<multiple<<endl;
    }

    return 0;
}