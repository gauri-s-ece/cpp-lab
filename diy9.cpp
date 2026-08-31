#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    cout<<"enter the sentence:";
    getline(cin,line);
    cout<<"number of characters:"<<line.length()<<endl;
    cout<<"first character:"<<line[0]<<endl;
    cout<<"last character:"<<line[line.length()-1];
    return 0;
}
