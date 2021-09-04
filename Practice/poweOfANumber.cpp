// A program to calculate the power of a number.
#include<iostream>
using namespace std;

double pow(double num, double power)
{
    int result=1;
    for(int i = 1; i<=power;i++)
    {
        result = result * num;
    }
    return result;
}
int main()
{
    double num,power;
    cout<<"Enter a number and its power.\n";
    cin>>num>>power;

    cout<<" The value of "<<num<<" to the power "<<power<<" is "<<pow(num,power)<<endl;


    return 0;
}

