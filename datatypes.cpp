// Program to determine the size of each datatype.
#include<iostream>

using namespace std;

int main()
{
    bool var1 = false;
    char var2 = 'T';
    wchar_t var3 = 'A';
    int var4 = 10;
    float var5 = 1.0;
    double var6 = 2.0;
    long double var7 = 7;
    short var8 = 10;

    cout<<"Size of is var1 is "<<sizeof(var1)<<" Bytes and \nits value is "<<var1<<endl;
    cout<<"Size of is var2 is "<<sizeof(var2)<<" Bytes and \nits value is "<<var2<<endl;
    cout<<"Size of is var3 is "<<sizeof(var3)<<" Bytes and \nits value is "<<var3<<endl;
    cout<<"Size of is var4 is "<<sizeof(var4)<<" Bytes and \nits value is "<<var4<<endl;
    cout<<"Size of is var5 is "<<sizeof(var5)<<" Bytes and \nits value is "<<var5<<endl;
    cout<<"Size of is var6 is "<<sizeof(var6)<<" Bytes and \nits value is "<<var6<<endl;
    cout<<"Size of is var7 is "<<sizeof(var7)<<" Bytes and \nits value is "<<var7<<endl;
    cout<<"Size of is var8 is "<<sizeof(var8)<<" Bytes and \nits value is "<<var8<<endl;

    return 0;
}