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
    long long int a[1005], n, m, k, ans = 0;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
      long long int t = 0;
      for (int j = 0; j < n; j++)
        if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
        {
          t++;
        }
      if (t <= k)
      {
        ans++;
      }
    }

    cout << ans << "\n";
  }
  return 0;
}