// A program to print all the armstrong numbers in a given range.
#include<iostream>
using namespace std;

int cube(int num)
{
    return (num*num*num);
}
bool isArmstrong(int num)
{
    int digit,realNum,sum=0;
    realNum = num;
    
    while(num>0)
    {
        digit = num%10;
        sum = sum+cube(digit);
        num/=10;
    }

    if(sum == realNum)
        return 1;
    else
        return 0;
}

void armstrongInRange( int a, int b)
{

    for(int i = a; i<b; i++)
    {
        if(isArmstrong(i))
            cout<<i<<" ";
    }
}

int main()
{
    int a,b;
    cout<<"Enter the range values (a and b)\n";
    cin>>a>>b;
    
    armstrongInRange(a,b);

    return 0;
}

