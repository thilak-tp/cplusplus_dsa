#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;


int sum(int num1, int num2);
int main()
{
    int num1=23,num2=3,result;
    auto start = high_resolution_clock:: now(); // To measure the intial time(t1)

    result = sum(num1,num2);
    auto stop = high_resolution_clock:: now();// To measure the final time(t2)
    auto duration = duration_cast<microseconds>(stop - start);// duration is the difference t2-t2
    cout<<"Sum = "<<result<<endl;
    cout<<"Execution time for the sum function = "<<duration.count()<<endl;
}

int sum(int num1, int num2)
{
    return num1,num2;

}