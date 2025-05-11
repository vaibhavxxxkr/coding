#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,2,3,4,5};
     int sum=sizeof (array)/sizeof (array[0]);
     for(int i=0;i<sum;i++)
     cout<<array[i]<<endl;

    return 0;
}