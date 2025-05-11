#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age: ";
    cin>>age;
    if(age<12)
    {
        cout<<"child";
    }
    else if(age>18)
    {
        cout<<"adult";
    }
    else
    {
        cout<<"teenager";
    }
    return 0;
}