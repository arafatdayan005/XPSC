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
    long long int n, w, l = 0, r = INT_MAX, m;
    cin >> n >> w;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    while (l <= r)
    {
      long long int total = 0;
      m = l + (r - l) / 2;
      for (int i = 0; i < n; i++)
      {
        if (v[i] < m)
        {
          total += (m - v[i]);
        }
      }

      if (total > w)
      {
        r = m - 1;
      }
      else
      {
        l = m + 1;
      }
    }
    cout << l - 1 << "\n";
  }
  return 0;
}