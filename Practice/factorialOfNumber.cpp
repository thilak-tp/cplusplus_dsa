
//A program to calculate the factorial of a number.
#include<iostream>
using namespace std;

int factorial(int num);

int main()
{
    int num,result;
    
    cout<<"Enter a number:\n";
    cin>>num;
    if(num<0)
    {
        cout<<"The number shouldn't be negative\n";
        exit(0);
    }
    else{
        result = factorial(num);
        cout<<"Factorial of "<<num<<" is "<<result<<endl;
    }

    return 0;
}

int factorial(int num)
{   
    int fact = 1;
    for(int i = 1; i<=num; i++)
    {
        fact *= i;
    }

    return fact;

}