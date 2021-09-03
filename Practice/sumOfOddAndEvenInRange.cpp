//A program to print the sum of all even and odd numbers of first n numbers
#include<iostream>
using namespace std;

int oddSum(int n);
int evenSum(int n);

int main()
{
    int n;

    cout<<"Enter the n value.\n";
    cin>>n;
    
    cout<<"The sum of Odd numbers in the range n is "<<oddSum(n)<<endl;
    cout<<"The sum of Even numbers in the range n is "<<evenSum(n)<<endl;


 
    return 0;
}

int oddSum(int n)
{
    int sum = 0;
    for(int i = 1; i<=n; i+=2)
        sum += i;
    
    return sum;
}
int evenSum(int n)
{
    int sum=0;
    for(int i=2; i<=n; i+=2 )
        sum += i;
    return sum;
}
