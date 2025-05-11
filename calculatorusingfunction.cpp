#include<iostream>
using namespace std;
int sum(int a,int b)
{
  int c=a+b;
  return c;
}
int difference(int a,int b)
{
    int c=a-b;
    return c;
}
int product(int a,int b)
{
    int c=a*b;
    return c;
}
int division(int a,int b)
{
    int c=a/b;
    return c;
}
int main()
{
    int n1,n2;
    cout<<"enter the first number: "<<endl;
    cin>>n1;
    cout<<"enter the second number: "<<endl;
    cin>>n2;
    cout<<"the sum is: "<<sum(n1,n2)<<endl;
    cout<<"the difference is: "<<difference(n1,n2)<<endl;
    cout<<"the product is: "<<product(n1,n2)<<endl;
    cout<<"the division is: "<<division(n1,n2);
    return 0;

}