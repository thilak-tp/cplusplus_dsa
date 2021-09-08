// A program to write and read data using get() and put() functions
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch = 'T';
    fstream textfile;
    textfile.open("getput.txt",ios::out);
    textfile.put(ch);
    textfile.close();
    textfile.open("getput.txt",ios::in);
    textfile.seekg(ios::beg);
    while(textfile)
    {
    textfile.get(ch);
    cout<<ch;
    }
    textfile.close();
    return 0;


}