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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int sum = 0;
        for (int k = 0; k < m; k++)
        {
          int val = abs(v[i][k] - v[j][k]);
          sum += val;
        }

        if (sum < ans)
        {
          ans = sum;
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}