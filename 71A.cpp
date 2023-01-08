#include <bits/stdc++.h>
using namespace std;
void check(string S)
{
    int n = S.length() ;
    if(n>10)
    {
            for(int i=0;i<n;i++)
        {
            cout << S[0] << n-2 << S[n-1] << endl;
            break;
        }
    }else
    {
        cout << S << endl;
    }
    
}
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        check(s);
    }
    return 0;
}