#include<iostream>
using namespace std;
int main()
{
    int array[5]={1,2,3,4};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[1]);
    return 0;
}