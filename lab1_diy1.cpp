#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    int v=0,con=0;
    string s;
    cout<<"enter the sentence:";
    getline(cin,s);
    for(char c:s)
    {c=tolower(unsigned(c));
        if(isalpha(unsigned(c)))
        {
             if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                ++v;
            }
            else{
                ++con;
            }
        }
    }
    cout<<"the number of vowels and consonants are :";
    cout<<"the number of vowels:"<<v<<endl;
    cout<<"the number of consonants:"<<con<<endl;
    return 0;

}