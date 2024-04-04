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
    long long int n, m, ans = 0;
    cin >> n >> m;
    long long int a[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> a[i][j];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        long long int sum = a[i][j];
        long long int x = j - 1, y = j + 1;

        for (int k = i - 1; k >= 0; k--)
        {
          if (x >= 0)
          {
            sum += a[k][x];
            x--;
          }

          if (y < m)
          {
            sum += a[k][y];
            y++;
          }
        }

        x = j - 1;
        y = j + 1;

        for (int k = i + 1; k < n; k++)
        {
          if (x >= 0)
          {
            sum += a[k][x];
            x--;
          }

          if (y < m)
          {
            sum += a[k][y];
            y++;
          }
        }
        ans = max(ans, sum);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}