#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter the first number: ";
    cin>>n1;
     cout<<"enter the second number: ";
    cin>>n2;
    char op;
    cout<<"enter an operator: (+,-,*,/,%) ";
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<"sum is : "<<n1+n2<<endl;
        break;
        case '-':
        cout<<"difference is : "<<n1-n2<<endl;
        break;
        case '*':
        cout<<"product is : "<<n1*n2<<endl;
        break;
        case '/':
        cout<<"division is : "<<n1/n2<<endl;
        break;
        case '%':
        cout<<"remainder is : "<<n1%n2<<endl;
        break;
            }




    return 0;
}