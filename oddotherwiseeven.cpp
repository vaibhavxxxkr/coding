#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n%2!=0)
    {
        cout<<"it is a odd number: "<<n<<endl;
    }
    else
    {
        cout<<"it is a even number: "<<n<<endl;
    }
    return 0;
}