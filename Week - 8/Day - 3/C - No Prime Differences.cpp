#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n, m, val = 1;
    cin >> n >> m;
    vector<long long int> a[n + 1];

    for (long long int i = 1; i <= n; i++)
    {
      a[i].resize(m + 1);
      for (long long int j = 1; j <= m; j++)
      {
        a[i][j] = val;
        val++;
      }
    }

    for (long long int i = 2; i <= n; i += 2)
    {
      for (long long int j = 1; j <= m; j++)
      {
        cout << a[i][j] << " ";
      }
      cout << "\n";
    }

    for (long long int i = 1; i <= n; i += 2)
    {
      for (long long int j = 1; j <= m; j++)
      {
        cout << a[i][j] << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}