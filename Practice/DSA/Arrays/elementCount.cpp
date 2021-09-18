// A program to find the frequency of a given element in an array
#include<iostream>
using namespace std;

int elementFrequency(int array[],int n,int element);

int main()
{
    int count,array[100],n,element,i;
    cout<<"Enter the n value.\n";
    cin>>n;
    cout<<"Enter "<<n<<" numbers.\n";
    for(i=0;i<n;i++)
        cin>>array[i];
    cout<<"Enter an element to count its frequency\n";
    cin>>element;
    count = elementFrequency(array,n,element);
    cout<<element<<" is repeated "<<count<<" times in the array\n";
    
    return 0;

}
int elementFrequency(int array[],int n, int element)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
           if(array[i] == element)
            count++;
    }

    return count;

}