// A program to find the sum of elements in an array.
#include<iostream>
using namespace std;

int arraySum(int *array,int n);

int main()
{   
    int *array,n;
    array = new int[100];
    cout<<"Enter the n value.\n";
    cin>>n;
    cout<<"Enter "<<n<<" elements.\n";
    for(int i=0;i<n;i++)
        cin>>array[i];
    cout<<"Sum of element of the array is: "<<arraySum(array, n)<<endl;
    return 0;
}

int arraySum(int *array,int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum+=array[i];
    return sum;
}