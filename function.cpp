#include<iostream>
using namespace std;
int sum(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int main()
{
    int n1,n2;
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    cout<<"the sum is "<<sum(n1,n2);
    return 0;

}