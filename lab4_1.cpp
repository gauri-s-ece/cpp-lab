#include <iostream>
using namespace std;
class Trader
{int id;
public:
Trader(int i):id(i)
{
    cout<<"Construct #"<<id<<endl;
}
~Trader()
{
    cout<<"Destruct #"<<id<<endl;
}
};
int main()
{
    cout<<"Enter block\n";
    { Trader a(1), b(2); 
    cout << " ...working...\n";}
    cout<<"Left block\n";
}