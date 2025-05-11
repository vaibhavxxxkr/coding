#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"enter the alphabet: ";
    cin>>alphabet;
    switch(alphabet)
    {
        case 'a':
        cout<<"vowel"<<endl;
        break;
        case 'e':
        cout<<"vowel"<<endl;
        break;
        case 'i':
        cout<<"vowel"<<endl;
        break;
        case 'o':
        cout<<"vowel"<<endl;
        break;
        case 'u':
        cout<<"vowel"<<endl;
        break;
        default :
        cout<<"consonant";
    }
    return 0;
}