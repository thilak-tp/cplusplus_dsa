// A program to get the sum of first n natural numbers
#include<iostream>
using namespace std;

int firstNSum(int n)
{   int sum = 0;
    for(int i=1;i<=n;i++)
        sum=sum+i;
    return sum;
}
int main()
{
    int n;

    cout<<"Enter the N value\n";
    cin>>n;
    
    cout<<" Sum of first "<<n<<" natural number is "<<firstNSum(n)<<endl;
    return 0;
}
