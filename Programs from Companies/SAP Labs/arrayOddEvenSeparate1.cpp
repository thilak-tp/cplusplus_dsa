/* A program that reads N numbers from the user and displays 
the even numbers first and odd numbers next*/
/* 1'st of the two coding questions asked in SAP Labs first round 
on 10th August 2021, on campus placement drive at VCET Puttur.*/
// Method from the internet since my logic flopped.
#include<iostream>
using namespace std;

void swap(int *num1, int *num2);
bool isEven(int num);
void separateEvenOdd(int *array, int n);

int main()
{
    int n, *array, i;
    array = new int [100];

    cout<<"Enter the n value.\n";
    cin>>n;
    cout<<"Enter "<<n<<" values.\n";
    for(i=0; i<n; i++)
        cin>>array[i];
    separateEvenOdd(array, n);
    cout<<"Even and odd separated array is:\n";
    for(i=0; i<n; i++)
        cout<<array[i]<<" ";
    
    return 0;
}

void swap(int *num1, int *num2)
{
    *num1 = *num1+*num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
     
}

bool isEven(int num)
{
    if(num%2==0)
        return 1;
    else
        return 0;

}
void separateEvenOdd(int *array, int n)
{
    int left=0,right = n-1,i;
    
    while(left<right)
    {
        while(isEven(array[left])&&(left<right))
            left++;
        while(!isEven(array[left])&&(left<right))
            right--;
        if(left < right)
        {
            swap(&array[left],&array[right]);
            left++;
            right--;
        }
    }
}
