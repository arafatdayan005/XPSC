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
    long long int n, q;
    cin >> n >> q;

    vector<long long int> v(n), vv(q);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
      cin >> vv[i];
    }

    set<long long int> c;

    for (int i = 0; i < q; i++)
    {
      if (c.count(vv[i]))
      {
        continue;
      }
      c.insert(vv[i]);
      for (int j = 0; j < n; j++)
      {
        if (v[j] % (1 << vv[i]) == 0)
        {
          v[j] += (1 << vv[i] - 1);
        }
      }
    }

    for (auto val : v)
    {
      cout << val << " ";
    }
    cout << "\n";
  }
  return 0;
}