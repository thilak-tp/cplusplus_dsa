// A program to check whether a number is palindrome or not
#include<iostream>
using namespace std;

bool isPalindrome( int num);

int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(isPalindrome(num))
        cout<<"The number "<<num<<" is Palindrome.\n";
    else
        cout<<"The number "<<num<<" is not Palindrome.\n";
        
    return 0;
}

bool isPalindrome( int num)
{
    int palindrome=0, realNum, div;
    realNum = num;
    for(int i=0;num >0;i++)
    {
        div = num%10;
        palindrome = palindrome*10+div;
        num /= 10;
        
    }
    
    if(palindrome == realNum)
        return 1;
    else
        return 0;
}

