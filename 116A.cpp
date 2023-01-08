#include <iostream>

using namespace std;
int n;    int ans = 0;
int a[1001];
int b[1001];
void input()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
}
void capacity(int max)
{
    if(max> ans) ans = max;
}
void find()
{
    int max = b[0];
    for(int i=1;i<n;i++)
    {
        capacity(max);
        max = max - a[i] + b[i];
    }
}
int main()
{
    input();
    find();
    cout << ans;
    return 0;
}