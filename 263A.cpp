#include <bits/stdc++.h>
using namespace std;
int a[6][6];
int main()
{
    int k =1 ;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==k)
            {
                int x = abs(i-2);
                int y = abs(j-2);
                cout <<  x + y;
                break;
            }
        }
    }
    
    return 0;
}