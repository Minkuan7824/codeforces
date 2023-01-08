#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == s[i+1])
        {
            x++;
        }
        if(s[i] != s[i+1])
        {
            x=0;
        }
        if(x==6)
        {
            cout << "YES";
            break;
        }
    }
    if(x==0)
    {
        cout << "NO";
    }
    return 0;
}