#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, a, x, y;
    cin >> n >> m >> a;
    if(n%a==0 && m%a==0)
    {
        x = n/a;
        y= m/a;
    }
    if(n%a !=0 && m%a !=0)
    {
         x =  trunc(n/a) + 1     ;
         y = trunc(m/a) +1;
    }
    if(n%a==0 && m%a !=0)
    {
        x =  (n/a)  ;
        y = trunc(m/a) +1 ;
    }
    if(n%a !=0 && m%a ==0)
    {
        x =  (m/a);
        y = trunc(n/a) + 1;
    }
    cout << x*y;
    return 0;
}
