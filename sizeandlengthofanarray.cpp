#include<iostream>
using namespace std;
int main()
{
    int roll_no[]={1,2,3,4,5};
    cout<<sizeof (roll_no)<<endl;
    cout<<sizeof (roll_no)/sizeof (roll_no[0]);
    return 0;
}