#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int x, y;
    for(int i=0;i<n;i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            x++; // chữ hoa
        }
    }
    y = n-x; // chữ thường
    if(x>y)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i] >= 97 && s[i] <= 122)
            {
                s[i] -=32;
            }
        }
    }else
    {
        for(int i=0;i<n;i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
            }
        }
    }
    cout << s;
   // cout << endl << x << " " << y;
    return 0;
}