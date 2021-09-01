// A Program to find the percentage of 3 marks entered.
#include<iostream>

using namespace std;

int main()
{
    float mark1, mark2, mark3, percentage;

    cout<<"Enter your marks\n";
    cin>>mark1>>mark1>>mark3;

    percentage = ((mark1+mark2+mark3)/300)*100;

    cout<<"Your percentage is "<<percentage<<endl;

    return 0;


}