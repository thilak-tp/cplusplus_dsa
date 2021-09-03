// A program to print the prime numbers in a given range
#include<iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
void primeInRange(int a,int b)
{
    cout<<" Prime numbers in the range "<<a<<" and "<<b<<" are:\n";
    for(int i=a; i<=b; i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }

}
int main()
{
    int a,b;
    cout<<"Enter range values (a,b)\n";
    cin>>a>>b;
    primeInRange(a,b);
        
    return 0;
}

