// A program to print the fibonacci series till N
#include<iostream>
using namespace std;

void fiboTillN(int n)
{
    int n1= 0, n2= 1,sum;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2; i<n; i++)
    {
        sum = n1 + n2;
        cout<<sum<<" ";
        n1 = n2;
        n2 = sum;
        
    }
}

int main()
{
    int n;

    cout<<"Enter the N value.\n";
    cin>>n;
    fiboTillN(n);
    return 0;
}

