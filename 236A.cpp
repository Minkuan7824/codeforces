#include <bits/stdc++.h>
using namespace std;

int a[1000];
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        int x = static_cast<int>(s[i]);
        a[i] = x;
    }
    sort(a+0,a+n,greater<int>());
    int k = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == a[i+1] )
        {
            k++;
        }
    }
    n = n - k;
    if( n % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}