#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout<<"enter your full name:";
    getline(cin,name);
    int l=name.length();
    cout<<"length:"<<l<<endl;
    if(l>10)
    {
        cout<<"your name exceeds 10 characters"<<endl;
    }
    else
    {
        cout<<"your name does not exceed 10 characters"<<endl;
    }
}