/* A program that reads N numbers from the user and displays 
the even numbers first and odd numbers next*/
/* 1'st of the two coding questions asked in SAP Labs first round 
on 10th August 2021, on campus placement drive at VCET Puttur.*/
#include<iostream>

using namespace std;

bool isEven(int num); // Function prototype
bool isOdd(int num); // Function prototype

void oddEvenSeparate(int *array, int n); // Function prototype

int main()
{
    int n,*array;
    array = new int[100];

    cout<<"Enter the n value.\n";
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>array[i];
    oddEvenSeparate(array,n);
    delete array;
    return 0;
}

bool isEven(int num) // Function definition
{
    if(num%2==0)
        return true;
    else
        return false;

}
bool isOdd(int num) // Function definition
{
    if(num%2!=0)
        return true;
    else
        return false;

}

void oddEvenSeparate(int *array, int n) // Function definition
{
    int *resultArray,*evenArray,*oddArray,evenCount=0,oddCount=0;
    evenArray = new int [100];
    oddArray = new int [100];
    resultArray = new int [100];
    // cout<<"Original array elements:\n";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<array[i]<< " ";
    // }
    

    for(int i=0;i<n;i++)
    {
        if(isEven(array[i]))
        {
            evenArray[i] = array[i];
            evenCount++;
            // cout<<array[i]<<" ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(isOdd(array[i]))
        {
            oddArray[i] = array[i];
            oddCount++;
            // cout<<array[i]<<" ";
        }
    }
    cout<<"\nEven array elements:\n";
    for(int i=0;i<n;i++)
    {
        cout<<evenArray[i]<< " ";
    }
    cout<<"\nOdd array elements:\n";
    for(int i=0;i<n;i++)
    {
        cout<<oddArray[i]<< " ";
    }
    // cout<<"Even Count:"<<evenCount<<" Odd Count:"<<oddCount;
    // for(int i=0;i<n;i++)
    // {
    //     if(i<evenCount)
    //     {
    //         resultArray[i] = evenArray[i];
    //         cout<<resultArray[i]<<" ";
    //     }
    //     else
    //     {
    //         resultArray[i] = oddArray[i];
    //         cout<<resultArray[i]<<" ";
    //     }        
    // }
    
    // cout<<"The sorted array is:\n";

    // for(int i=0;i<n;i++)
    // {
    //     cout<<resultArray[i]<<" ";
    // }
    // cout<<endl;

    delete evenArray;
    delete oddArray;
    delete resultArray;


}