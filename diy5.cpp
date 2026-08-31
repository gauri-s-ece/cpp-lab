#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstname,lastname;
    cout<<"First name:";
    cin>>firstname;
    cout<<"Last name:";
    cin>>lastname;
    string fullname=firstname+" "+lastname;
    cout<<"joined name:"<<fullname<<endl;
    cout<<"length:"<<fullname.length()<<endl;
    cout<<"the initials are:"<<firstname[0]<<" "<<lastname[0]<<endl;
    return 0;
}