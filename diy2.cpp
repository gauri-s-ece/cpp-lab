#include <iostream>
using namespace std;
int main()
{
    int marks,total;
    cout<<"marks scored:";
    cin>>marks;
    cout<<"total marks:";
    cin>>total;
    int percentage=((marks*100)/total);
    float exper=(marks*100.0)/total;
    cout<<"percentage scored:"<<percentage<<endl;
    cout<<"exact percentage:"<<exper<<endl;
    return 0;

}