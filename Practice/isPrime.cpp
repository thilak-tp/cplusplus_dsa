// A program to check if a number is prime or not.
// A number which is divisible only by 1 or itself
#include<iostream>
using namespace std;

bool isPrime(int num);



int main()
{
    bool primeFlag;
    int num;

    cout<<"Enter a number.\n";
    cin>>num;
    
    primeFlag = isPrime(num);
    if(primeFlag)
        cout<<num<<" is a prime number\n";
    else
        cout<<num<<" is a not a prime number\n";
        
    return 0;
}

bool isPrime(int num)
{
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;

}

