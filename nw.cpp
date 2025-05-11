//Write a program to print the sum of two numbers entered by user by defining your own function.
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int n1,n2;
    cout<<"enter the first number: "<<endl;
    cin>>n1;
    cout<<"enter the second number: "<<endl;
    cin>>n2;
    cout<<"the sum is: "<<sum(n1,n2);
    return 0;
}