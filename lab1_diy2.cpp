#include <iostream>
#include <string>
using namespace std;
int main()
{
    int freq1[26]={0},freq2[26]={0};
    string s1,s2;
    cout<<"enter the words: ";
    cin>>s1>>s2;
    for (char c1:s1)
    {
        if(isalpha(unsigned(c1)))
        {
            freq1[tolower(c1)-'a']++;
        }
    }
    for(char c2:s2)
    {
        if(isalpha(unsigned(c2)))
        {
            freq2[tolower(c2)-'a']++;
        }
    }
    
    cout<<"the frequency of the following letter in the first word:"<<endl;
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=0)
        {
            
            cout<<char('a'+i)<<":"<<freq1[i]<<" "<<endl;
        }
    }
    cout<<"the frequency of the following letter in the second word:"<<endl;
    for(int i=0;i<26;i++)
    {
        if(freq2[i]!=0)
        {
            
            cout<<char('a'+i)<<":"<<freq2[i]<<" "<<endl;
        }
    }
    bool anagram=false;
    for(int i=0;i<26;i++)       
    {    if(freq1[i]==freq2[i])
            {
             anagram=true;
            }
            else
            {
                anagram=false;
                break;}
    }
    cout<<"the given words"<<(anagram==true?" are":" are not")<<" Anagram";
return 0; 
}
