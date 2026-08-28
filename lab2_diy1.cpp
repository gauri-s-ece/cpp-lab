#include <iostream>
using namespace std;
int volume(int x)
{
    return x*x*x;
}
int volume(int l,int b,int h)
{
    return l*b*h;
}
double volume(double r,double h)
{
    return 3.14159*r*r*h;
}
int main()
{
    cout<<"Volume of the cube of side 4 ="<<volume(4)<<endl;
    cout<<"Volume of the cuboid of l=5 and b=3 and h=2 is="<<volume(5,3,2)<<endl;
    cout<<"Volume of the cylinder of r=3 and h=6 ="<<volume(3,6)<<endl;
    return 0;
}