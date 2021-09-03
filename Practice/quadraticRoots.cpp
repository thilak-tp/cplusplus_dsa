

// A program to find the roots of a quadratic equation
#include<iostream>
#include<math.h>
using namespace std;


int main()
{ 
    float a,b,c,root1,root2,det,real,imaginary;
    cout<<"Enter the values for a, b and c in ax^2+bx+c=0\n";
    cin>>a>>b>>c;
    if(!a)
        cout<<"The value of \'a\' should not be zero! Aborting!!!\n";
    else{
        
        det = (b*b)-(4*a*c);

        if(det>0)
        {
            root1 = (-b-sqrt(det))/(2*a);
            root2 = (-b+sqrt(det))/(2*a);
            cout<<"The roots are real and not unequal\n";
            cout<<"Root1 = "<<root1<< "Root2 = "<<root2;
            
        }
        else if(det==0)
        {
            root1 = root2 = -b/(2*a);
            cout<<"The roots are real and equal\n";
            cout<<"Root1 = Root2 = "<<root1;
        }
        else{
            
            real = -b/(2*a);
            //Abs is used to pass the absolute value of det because sqrt requires a +ve number.
            imaginary = sqrt(abs(det))/(2*a);
            cout<<"The roots are complex and imaginary\n";
            cout<<"Root1 = "<<real<<" + i "<<imaginary<<endl;
            cout<<"Root2 = "<<real<<" - i "<<imaginary<<endl;


        }
    }
    return 0;
}