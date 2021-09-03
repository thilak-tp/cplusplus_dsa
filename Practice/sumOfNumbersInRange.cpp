// A program to get the sum of numbers in a given range.
#include<iostream>
using namespace std;

int rangeSum(int a, int b)
{   int sum = 0;
    for(int i=a; i<=b; i++)
        sum = sum + i;
        
    return sum;
}
int main()
{
    int a,b;

    cout<<"Enter the the range values (a and b)";
    cin>>a>>b;
    
    cout<<" Sum of number in the range from "<<a<<" to "<<b<<" is "<<rangeSum(a,b)<<endl;
    return 0;
}
