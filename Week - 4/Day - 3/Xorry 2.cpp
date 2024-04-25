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
    int n, a = 1, b = 0, cnt = 0;
    cin >> n;

    while (a * 2 <= n)
    {
      a = a * 2;
      cnt++;
    }

    int ans = 1;
    bool chk = false;
    for (int i = cnt - 1; i >= 0; i--)
    {
      if (n & 1 << i)
      {
        b = b | (1 << i);
        chk = true;
      }
      else
      {
        if (chk)
        {
          ans = ans * 2;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}