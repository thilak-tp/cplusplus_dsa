// A 4 function calculator 
#include<iostream>
using namespace std;

// Function prototypes
double add(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);

int main()
{   
    bool onceDone = false;
    char optr;
    double num1, num2, result;
    do{
        if(!onceDone)
        {
            cin>>num1>>optr>>num2;
            switch(optr)
            {
                case '+': result = add(num1,num2); break;
                case '-': result = sub(num1,num2); break;
                case '*': result = mul(num1,num2); break;
                case '/': result = div(num1,num2); break;
                case 'e': exit(0);
                default : cout<<"Invalid Operator!";exit(0);
            }
            cout<<"="<<result;
            onceDone = true;
        }
        else
        {
            cin>>optr>>num2;
            switch(optr)
            {
                case '+': result = add(result,num2); break;
                case '-': result = sub(result,num2); break;
                case '*': result = mul(result,num2); break;
                case '/': result = div(result,num2); break;
                case 'e': exit(0);
                default : cout<<"Invalid Operator!";exit(0);
            }
            cout<<"="<<result;
        }

    }while(1);
    
    return 0;
}

double add(double num1, double num2)
{
    return num1+num2;

}
double sub(double num1, double num2)
{
    return num1-num2;

}
double mul(double num1, double num2)
{
    return num1*num2;

}
double div(double num1, double num2)
{
    return num1/num2;

}

