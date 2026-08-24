#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int i,j,l,b=0;
    string s1,s2;
    cout<<"enter the sentence:";
    getline(cin,s1);
    reverse(s1.begin(),s1.end());
    s2=s1;
    l=s2.size();
    for(i=0;i<=l;i++)
    {
        if(i==l||s2[i]==' ')
        {
            for(j=(i-1);j>=b;j--)
            {
                cout<<s2[j];
            }
                cout<<" ";
                b=i+1;
        }
    }
    return 0;
}