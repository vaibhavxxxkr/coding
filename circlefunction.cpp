//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
#include<iostream>
using namespace std;
float circumference(float r)
{
   float circumference=2*(22/7)*r;
    return circumference;
}
float area(float r)
{
   float area=(22/7)*r*r;
    return area;
}
int main()
{
    float r;
    cout<<"enter the radius: "<<endl;
    cin>>r;
    cout<<"the circumference is: "<<circumference(r)<<endl;
    cout<<"the area is: "<<area(r);
    return 0;
}