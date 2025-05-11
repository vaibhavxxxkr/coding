'''#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"enter the number of rows";
    cin>>r;
    cout<<"enter the number of columns";
    cin>>c;
    for(i=1;i<=r;r++)
    {
        for(j=1;j<=c;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}'''

#include<iostream>
using namespase std;
  class A
  {
    int x,y,z;
    public;
        A(int i, int j, int k)
        {
            x=i;
            y=j;
            z=k;
        }
        A operator + (A d)
        {
            A t;
            t.x=x+d.x;
            t.y=y+d.y;
            t.z=z+d.z;
            return t;
        }
        void show()
        {
            cout<<"x="<<x<<"y="<<y<<"z="<<z;
        }
  };
  int main() 
  {
    A a(2,3), b(3,4), c;
    a.show();
    b.show();
    c=a+b;
    c.show();
    return 0;
  }
