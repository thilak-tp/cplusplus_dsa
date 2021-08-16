// A program to check different types of macro declarations
#include<iostream>
#include<stdio.h>
// Object-like macro
#define PI 3.142 
// Function-like macro
#define sum(num1,num2) (num1+num2) 
// Chain macro
#define MATH MARKS
#define MARKS 43
//Multiline  macro
#define PRINT(first, second)\ 
            printf("First : %d ", first);\
            printf("Second : %d", second);\
            printf("\n");\
            
using namespace std;

int main()
{
    cout<<"Value of the Object-like macro is "<<PI<<endl;
    cout<<"Value of the Function-like macro is "<<sum(1,2)<<endl;
    cout<<"Value of the Chain macro is "<<MATH<<endl;
    cout<<"Value of the Multiline macro is "<<PRINT(1,2);
    return 0;




}