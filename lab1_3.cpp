#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() 
{
    int c;
    string s = "verification";
    cout << "First 4 : " << s.substr(0, 4) << endl;
    cout << "From 4 : " << s.substr(4)<<endl;
    c=s.compare("verify");
    cout<< endl;
    cout << "compare vs 'verify': " << (c < 0 ? "<" : c > 0 ? ">" : "=") << endl;
    int freq[26] = {0};
    for (char ch : s) 
    {
        if (isalpha((unsigned char)ch)) 
        {
            freq[tolower(ch)- 'a']++;
        }
    }
    cout << "Letter counts: ";
    cout << endl;
    for (int i = 0; i < 26; ++i) 
    {
        if (freq[i]) 
        {
            cout << char('a'+i) << ":" << freq[i] << " ";
        }
    }
    return 0;
}
