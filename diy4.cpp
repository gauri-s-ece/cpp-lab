#include <iostream>
using namespace std;
int main()
{
    int bill=395,share;
    share=bill/3;
    cout<<"each of the 3 person's share:"<<share<<endl;
    double leftover=bill%3;
    cout<<"leftover that cannot be split:"<<leftover<<endl;
    return 0;

}