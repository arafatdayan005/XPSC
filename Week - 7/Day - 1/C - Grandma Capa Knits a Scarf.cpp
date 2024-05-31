#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int res = n + 1;
    
    for (int i = 0; i <= 26; i++)
    {
      int l = 0, r = n - 1, cnt = 0;
      while (l <= r)
      {
        if (str[l] == str[r])
        {
          l++;
          r--;
        }
        else if (str[l] == ('a' + i))
        {
          cnt++;
          l++;
        }
        else if (str[r] == ('a' + i))
        {
          cnt++;
          r--;
        }
        else
        {
          cnt = n + 1;
          break;
        }
      }
      res = min(res, cnt);
    }
    if (res == n + 1)
    {
      cout << -1 << "\n";
    }
    else
    {
      cout << res << "\n";
    }
  }
  return 0;
}