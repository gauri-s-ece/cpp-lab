#include <iostream>
using namespace std;
class Complex_numbers
{
    private:
    int real;
    int imag;
    public:
    void setData(int r,int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex_numbers cn[3];
    cn[0].setData(3,4);
    cn[1].setData(6,5);
    cn[2].setData(7,8);
    cout<<"the complex numbers are:"<<endl;
    for(int i=0;i<3;i++)
    {
        cn[i].display();
    }
    return 0;
}