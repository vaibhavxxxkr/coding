//Define a function that returns the product of two numbers entered by user.
#include<iostream>
using namespace std;
int product(int a,int b)
{
    int c=a*b;
    return c;
}
int main()
{
    int n1,n2;
    cout<<"enter the first number: "<<endl;
    cin>>n1;
    cout<<"enter the second number: ";
    cin>>n2;
    cout<<"the product is: "<<product(n1,n2);
    return 0;
}