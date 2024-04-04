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
    int n, q, sum = 0;
    cin >> n >> q;

    vector<int> v(n), pre(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      sum += v[i];
      pre[i] = sum;
    }

    while (q--)
    {
      int l, r, k;
      cin >> l >> r >> k;
      l--;
      r--;
      int x = (r - l + 1) * k;
      if (l != 0)
        x += pre[l - 1];
      if (r != n - 1)
        x += pre[n - 1] - pre[r];
      if (x & 1)
        cout << "YES" << "\n";
      else
        cout << "NO" << "\n";
    }
  }
  return 0;
}