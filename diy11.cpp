#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter the amount:";
    cin>>amount;
    if(amount==0||amount>10000||amount%500!=0)
    cout<<"reject"<<endl;
    else
    cout<<"number of notes:"<<amount/500<<endl;
    return 0;
}