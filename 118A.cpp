#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i] >=65 && s[i] <= 90)
        {
            s[i] += 32; // chuyển chữ hoa thành chữ thường 
        }
    }
    for(int i=0;i<n;i++)
    {
      //  s.erase(i,1); // xóa kí tự tại vị trí i
      if(s[i] == 'a' ||s[i] == 'o' ||s[i] == 'u' || s[i] =='e' || s[i] =='i' || s[i] =='y' )
      {
          continue;
      }
      cout << "." << s[i];
     //   s.insert(i,str); // chèn thêm dấu chấm vào trước mỗi ký tự
    }

    return 0;
}