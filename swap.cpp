
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"a: "<<a;
    cout<<"b: "<<b;
    return 0;
}
