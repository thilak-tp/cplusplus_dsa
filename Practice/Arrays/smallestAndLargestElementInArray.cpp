// A program to find the smallest and the biggest number in an array.
#include<iostream>
using namespace std;
int result[2];
int * bigSmallArrayElement(int *array, int n);
int main()
{
    int n,*array,*result;
    array = new int[100];
    cout<<"Enter the array size.\n";
    cin>>n;
    cout<<"Enter "<<n<<" array elements,\n";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    result = bigSmallArrayElement(array,n);
    cout<<"Largest number: "<<result[0]<<"\nSmallest number: "<<result[1]<<endl;



    return 0;
}
int* bigSmallArrayElement(int *array, int n)
{
    result[0] =result[1] = array[0];
    for(int i=0;i<n;i++)
    { 
        
        if(array[i]>result[0])
            result[0] = array[i];
        if(array[i]<result[1])
            result[1] = array[i];
            
    }
    return result;
}