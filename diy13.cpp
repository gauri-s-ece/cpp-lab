#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the password:";
    cin>>s;
    int l=s.length();
    if (s=="password")
    cout<<"terrible";
    else if(l<6)
    cout<<"weak";
    else if(l<10)
    cout<<"medium";
    else 
    cout<<"strong";
    return 0;


}