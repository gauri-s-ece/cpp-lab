#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the three numbers:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"Biggest:"<<a<<endl;
        else
        cout<<"Biggest:"<<c<<endl;
    }
    else
    {
        if(b>c)
        cout<<"Biggest:"<<b<<endl;
        else
        cout<<"Biggest:"<<c<<endl;
    }
    return 0;
    //only two comparisons needed
}