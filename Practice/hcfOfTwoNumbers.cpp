//A program to find the Highest Common Factor between two numbers.
// HCF is the highest common positive number that perfectly divides both numbers
#include<iostream>
using namespace std;

int hcf(int num1, int num2)
{   
    int HCF = 0;
    for( int i=1; i <= num1; i++)
    {
        if((num1%i==0)&&(num2%i==0))
        {
            HCF = i;
        }
    }
    return HCF;
}
int main()
{
    int num1, num2;
    cout<<"Enter two numbers.\n";
    cin>>num1>>num2;
    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf(num1, num2)<<endl;
    return 0;

}

