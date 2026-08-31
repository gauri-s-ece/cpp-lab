#include <iostream>
#include <string>
using namespace std;
void upgrade(string s)
{
    s=s+" verified";
}
int main()
{
    string check="result";
    upgrade(check);
    cout<<check;
    return 0;
}