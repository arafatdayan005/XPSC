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
    int n, k, ans = 0, odd = 0;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < k; i++)
    {
      if (a[i] % 2 != 0)
      {
        odd++;
      }
    }

    if (odd > 0)
    {
      ans++;
    }

    for (int i = k; i < n; i++)
    {
      if (a[i - k] % 2 != 0)
      {
        odd--;
      }
      if (a[i] % 2 != 0)
      {
        odd++;
      }
      if (odd > 0)
      {
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}