#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"enter a word:";
    cin>>s;
    cout<<"Length:"<<s.length()<<endl;
    cout<<"Upper :";
    for(char c:s)
    cout<<(char)toupper(c);
    cout<<endl;
    bool pal=true;
    for(size_t i=0,j=s.size()-1;i<j;++i,--j)
    if(s[i]!=s[j])
    {
        pal=false;
        break;
    }
    cout<<s<<(pal?" is":" is not")<<" a palindrome";
    size_t pos=s.find("an");
    if(pos!=string::npos)
    {
        cout<<"'an' found at position:"<<pos;
    }
    else
    {
        cout<<"'an' is not found";
    }

return 0;

}