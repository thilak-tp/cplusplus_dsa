#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;


int sum(int num1, int num2);
int main()
{
    int num1=23,num2=3,result;
    auto start = high_resolution_clock:: now();

    result = sum(num1,num2);
    auto stop = high_resolution_clock:: now();
    auto duration = duration_cast<microseconds>(stop - start);
    
    cout<<"Sum = "<<result<<endl;
    cout<<"Execution time for the sum function = "<<duration.count()<<endl;
}

int sum(int num1, int num2)
{
    return num1,num2;

}