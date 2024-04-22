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
    int s, x = 0;
    cin >> s;

    for (int i = 0; i < s; i++)
    {
      int ans;
      cin >> ans;
      x ^= ans;
    }

    if (s & 1)
    {
      cout << x << "\n";
    }
    else
    {
      if (!x)
      {
        cout << 0 << "\n";
      }
      else
      {
        cout << -1 << "\n";
      }
    }
  }
  return 0;
}