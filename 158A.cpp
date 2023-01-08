#include <bits/stdc++.h> 
using namespace std;
int a[101] ;
int main()
{
    int n,k ;
    cin >> n >> k;
    int h =0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int tmp = a[k];
    for(int i=1;i<=n;i++)
    {
        if(a[i] == 0 && i <= k )
        {
            h = i-1 ;
            break;
        }
        if(a[i] >= tmp)
        {
            h++;
        }
    }
    cout << h;
    return 0;
} 