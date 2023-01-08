#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int a,b,c;
    int k=0;
    while(n--)
    {
        cin >> a >> b >> c;
        if(a>0 && b>0 || a>0 && c>0 || b>0 && c>0)
        {
            k++;
        }
    }
    cout << k;

    return 0;
}