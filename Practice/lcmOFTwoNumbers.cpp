//A program to find the Least Common Multiple of two numbers.
// LCM is the least number that can be divisible by both the numbers
#include<iostream>
using namespace std;

int lcm(int num1, int num2)
{   
    int LCM;
    if(num1>num2)
        LCM = num1;
    else
        LCM = num2;
    while(1)
    {
        if((LCM%num1==0)&&(LCM%num2==0))
        {
            return LCM;
        }
        LCM++;
    }

}
int main()
{
    int num1, num2;
    cout<<"Enter two numbers.\n";
    cin>>num1>>num2;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm(num1, num2)<<endl;
    return 0;

}

