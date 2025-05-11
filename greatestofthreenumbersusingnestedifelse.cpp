#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter the number 1: ";
    cin>>n1;
    cout<<"enter the number 2: ";
    cin>>n2;
    cout<<"enter the number 3: ";
    cin>>n3;
    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<"the number 1 is maximum: "<<n1<<endl;
        }
        else{
            cout<<"the number 3 is maximum: "<<n3<<endl;
        }
    }
    if(n2>n3)
    {
        cout<<"the number 2 is maximum: "<<n2<<endl;
    }
    else
    {
        cout<<" the number 3 is maximum: "<<n3;
    }
    return 0;
}