#include<iostream>
using namespace std;
int main()
{
    int key;
     
    int array[]={11,22,33,44,55};
    cout<<"enter the key: ";
    cin>>key;
    int ans=-1;
    for(int i=0;i<5;i++)
    if(array[i]==key)
    ans=i;
    cout<<ans;

    return 0;
}