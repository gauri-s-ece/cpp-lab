#include <iostream>
using namespace std;
inline int minVal(int a,int b)
{
    return (a<b)?a:b;
}
inline int minVal(int a,int b,int c)
{
    return (a<b)?((a<c)?a:c):((b<c)?b:c);
}
int main()
{
    cout<<"the smallest of 2 and 3= "<<minVal(2,3)<<endl;
    cout<<"the smallest of 6,4 and 5= "<<minVal(6,4,5)<<endl;
    return 0;
}