// A program to check whether a number is an abundant  number or not
// An Abundant number is a whose sum of divisors is greater than the number itself
#include<iostream>
using namespace std;

bool isAbundant(int num)
{
    int sum=0;
    for(int div = 1; div <num; div++)
    {
        if(num%div == 0)
            sum = sum + div;
    }

    if(sum > num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(isAbundant(num))
        cout<<num<<" is an Abundant number.\n";
    else
        cout<<num<<" is not an Abundant number.\n";
    return 0;
}

