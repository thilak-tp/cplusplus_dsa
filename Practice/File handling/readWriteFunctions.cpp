// A program to write and read data using read() and write() functions
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct student
{
    char name[20];
    int age;
};
int main()
{
    student s,s1;
    strcpy(s.name,"Thilak");
    s.age = 22;

    fstream textfile;
    textfile.open("thilak",ios::out|ios::binary);
    textfile.write((char*)&s,sizeof(student));
    textfile.close();
    textfile.open("thilak.txt",ios::in|ios::binary);
    textfile.read((char*)&s1,sizeof(student));
    cout<<"Read details from the file-\nName: "<<s1.name<<" \nAge: "<<s1.age<<endl;




    return 0;


}