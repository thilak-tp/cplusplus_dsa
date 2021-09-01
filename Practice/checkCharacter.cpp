
/* A program the check whehter the entered character is a number,uppercase or lowercase character or any other character.*/
#include<iostream>
using namespace std;


int main()
{ 
    char ch;
    cout<<"Enter any character.\n";
    cin>>ch;

    if(ch>=65 && ch<=90)
        cout<<ch<<" is an uppercase character.";
    else if(ch>=97 && ch<=122)
        cout<<ch<<" is a lowecase character.";
    else if(ch>=48 && ch<=57)
        cout<<ch<<" is a digit.";
    else 
        cout<<ch<<" is a special character.";


    
    return 0;
}