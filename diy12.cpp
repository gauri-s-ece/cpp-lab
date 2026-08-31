#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the x and y values:";
    cin>>x>>y;
    if(x!=0&&y!=0)
    {if(x>0&&y>0)
    cout<<"first quadrant"<<endl;
    else if(x<0&&y>0)
    cout<<"secondquadrant"<<endl;
    else if (x<0&&y<0)
    cout<<"third quadrant"<<endl;
    else
    cout<<"fourth quadrant"<<endl;}
    else
    cout<<"on the axis";
    return 0;
}