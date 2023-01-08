#include <iostream>

using namespace std;
bool check(long long n)
{
    int count=0;
    while (n > 0)
    {
        int tmp = n % 10;
        n /= 10;
        if (tmp == 4 || tmp == 7)
            count++;
    }
    if(count == 4 || count == 7) return true;
    return false;
}
int main()
{
    long long n;
    cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
    return 0;
}