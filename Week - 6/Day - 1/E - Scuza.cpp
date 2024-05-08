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
    long long int n, q, sum = 0, pos = 0;
    cin >> n >> q;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    vector<pair<long long int, long long int>> qry(q);
    vector<long long int> ans(q);

    for (int i = 0; i < q; i++)
    {
      cin >> qry[i].first;
      qry[i].second = i;
    }

    sort(qry.begin(), qry.end());
    
    for (int i = 0; i < q; i++)
    {
      while (pos < n && v[pos] <= qry[i].first)
      {
        sum += v[pos];
        pos++;
      }
      ans[qry[i].second] = sum;
    }
    for (auto x : ans)
    {
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}