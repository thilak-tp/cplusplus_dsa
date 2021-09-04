// A program to print the factors of a number
#include<iostream>
using namespace std;

void printFactors(int num)
{
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            cout<<i<<" ";
    }
}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;
    cout<<"Factors of "<<num<<" are :\n";
    printFactors(num);

    return 0;
}

