// A program to reverse a given array
#include<chrono> //Added just to measure the execution time for the reverse function
#include<iostream>
using namespace std;
using namespace std::chrono;


void swap(int num1, int num2);
void reverseArray(int array[], int n);

int main()
{
    int array[100],n,i;
    cout<<"Enter the n value.\n";
    cin>>n;
    cout<<"Enter "<<n<<" numbers.\n";
    for(i=0;i<n;i++)
        cin>>array[i];
    auto start = high_resolution_clock::now();    
    reverseArray(array,n);
    auto stop = high_resolution_clock::now();    
    auto duration = duration_cast<microseconds>(stop - start);

    cout<<"Reversed array: ";
    for(i=0;i<n;i++)
        cout<<array[i]<<" ";
    cout<<"\nreverseArray() execution time: "<<duration.count()<<endl;

    return 0;

}

void swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
void reverseArray(int array[], int n)
{
    int left =0,right = n-1;
    while(left<right)
    {
        swap(&array[left],&array[right]);
        left++;
        right--;

    }

}
