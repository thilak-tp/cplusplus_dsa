// A program sort a given array's first half in ascending and the second half in descending order
#include<iostream>
using namespace std;

void swap(int num1, int num2);
void halfAscendDescendSort(int array[],int n);

int main()
{
    int array[100],n,i;
    cout<<"Enter the n value.\n";
    cin>>n;
    cout<<"Enter "<<n<<" numbers.\n";
    for(i=0;i<n;i++)
        cin>>array[i];
    halfAscendDescendSort(array,n);
    cout<<"Array in half ascending and half descending order: ";
    for(i=0;i<n;i++)
        cout<<array[i]<<" ";
    return 0;

}

void swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
void halfAscendDescendSort(int array[],int n)
{
    int left=0,right=n-1;
    for(int i=0; i<n/2; i++)
        for(int j=i+1; j<n/2;j++)
        {
            if(array[i]>array[j])
                   swap(&array[i],&array[j]);
        }
   for(int i=n/2; i<n; i++)
        for(int j=i+1; j<n;j++)
        {
            if(array[i]<array[j])
                   swap(&array[i],&array[j]);
        }

}
