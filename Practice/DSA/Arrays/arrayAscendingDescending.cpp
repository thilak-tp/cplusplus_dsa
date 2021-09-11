// A program sort a given array in ascending and descending order
#include<iostream>
using namespace std;

void swap(int num1, int num2);
void ascendingSort(int array[], int n);
void descendingSort(int array[], int n);

int main()
{
    int array[100],n,i;
    cout<<"Enter the n value.\n";
    cin>>n;
    cout<<"Enter "<<n<<" numbers.\n";
    for(i=0;i<n;i++)
        cin>>array[i];
    ascendingSort(array,n);
    cout<<"Array in ascending order: ";
    for(i=0;i<n;i++)
        cout<<array[i]<<" ";
    descendingSort(array,n);
    cout<<"\nArray in descending order: ";
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
void ascendingSort(int array[], int n)
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n;j++)
        {
            if(array[i]>array[j])
                   swap(&array[i],&array[j]);
        }
}

void descendingSort(int array[], int n)
{
     for(int i=0; i<n; i++)
        for(int j=i+1; j<n;j++)
        {
            if(array[i]<array[j])
                   swap(&array[i],&array[j]);
        }
}
