// A program to check whether a year is a leap year or not
#include<iostream>
using namespace std;

bool isLeapYear(int year)
{
    if((year%100!=0)&&(year%4==0)||(year%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    int year;

    cout<<"Enter a year\n";
    cin>>year;
    
    if(isLeapYear(year))
        cout<<year<<" is a leap year\n";    
    else
        cout<<year<<" is not a leap year\n";    
        
    return 0;
}

