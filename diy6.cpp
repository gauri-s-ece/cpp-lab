#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x=10,y=20;
    cout<<"before swapping: x="<<x<<" y="<<y<<endl;
    swap(x,y);
    cout<<"after swapping: x="<<x<<" y="<<y<<endl;
    return 0;
    //large numbers can cause signed integer overflow
}