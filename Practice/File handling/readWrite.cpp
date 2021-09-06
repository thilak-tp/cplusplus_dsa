// A program to read and write multiple student details to different files.
#include<iostream>
#include<fstream>
using namespace std;
char filename[20];
struct student{     // A structure to store student details
    char name[20];
    char usn[20];
    int age;
};

student studentInput(); // A function prototype for a function that takes student data
void studentDisplay(struct student); // A function prototype for a functon that displays student data
void studentWrite(struct student); // A function prototype for a function that writes data to a file
student studentRead(struct student); // A function prototype for a function that reads data from a file

int main()
{
    int n;
    char ch;
    student *s;
    s = new student[10];
    cout<<"Enter the filename to save these details in\n";
    cin>>filename;
    do{ RESTART:
        
        cout<<"Enter a choice \n1.Input Details and write to file.\n2.Read from the file and display info\n3.Remove Existing file\n4.Exit\n";
        cin>>ch;
        
        switch(ch)
        {
            case '1':   cout<<"Enter the number of students of whom you want to enter the details.\n";
                        cin>>n;
                        // student s[n];
                        
                        for(int i=0;i<n;i++)
                        {   
                            s[i] = studentInput();
                            studentWrite(s[i]);

                        }
                        break;
            case '2':
                        // student s[n];  
                        for(int i=0;i<n;i++)
                        {
                            studentRead(s[i]);
                            studentDisplay(s[i]);
                        }   
                        break;
            case '3':   remove(filename);exit(0);
            case '4':   exit(0);

            default: cout<<"Invalid Selection!\n Aborting!\n"; goto RESTART;
                      
        }

    
    }while(1);

}
student studentInput() // A function that takes student data
{
    student s;
    cout<<"Enter the student's name:\n";
    cin>>s.name;
    cout<<"Enter the student's USN:\n";
    cin>>s.usn;
    cout<<"Enter the student's age:\n";
    cin>>s.age;
    return s;
}
void studentDisplay(student s) // A function that displays student data
{
    cout<<"*****File Read Sucessfully*****\n\nName: "<<s.name<<"\nUSN: "<<s.usn<<"\nAge: "<<s.age<<"\n\n\n";
}
void studentWrite(student s) // A function that writes data to a file
{
    ofstream outputFile;
    outputFile.open(filename,ios::out|ios::app);
    outputFile<<s.name<<"\n"<<s.usn<<" \n"<<s.age<<"\n";
    outputFile.close();
}
student studentRead(student s) // A function that reads data from a file
{
    char ch;
    ifstream inputFile;
    inputFile.open(filename);
    
    
    inputFile.get(s.name,30);
    inputFile.get(ch);
    inputFile.get(s.name,30);
    inputFile.get(ch);
    inputFile.close();
    return s;
}