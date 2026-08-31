#include <iostream>
using namespace std;
void minMax(int a,int b,int &small,int &big)
{
    small=(a<b)?a:b;
    big=(a>b)?a:b;
}
int main()
{   int x=2,y=3,s=0,b=0;
    minMax(x,y,s,b);
    cout<<"small="<<s<<" big="<<b;
    return 0;
    //normal return cannot return more than one value simultaneously
}