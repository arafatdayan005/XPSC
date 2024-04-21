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
    int n, ans = 0;
    cin >> n;

    vector<pair<int, int>> va, vb, vc;

    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      va.push_back({a, i});
    }

    for (int i = 0; i < n; i++)
    {
      int b;
      cin >> b;
      vb.push_back({b, i});
    }

    for (int i = 0; i < n; i++)
    {
      int c;
      cin >> c;
      vc.push_back({c, i});
    }

    sort(va.begin(), va.end(), greater<pair<int, int>>());
    sort(vb.begin(), vb.end(), greater<pair<int, int>>());
    sort(vc.begin(), vc.end(), greater<pair<int, int>>());

    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        for (int k = 0; k < 3; k++)
        {
          if (va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second)
          {
            ans = max(va[i].first + vb[j].first + vc[k].first, ans);
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}