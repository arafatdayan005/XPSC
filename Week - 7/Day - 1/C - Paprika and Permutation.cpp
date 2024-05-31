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
    long long int n;
    cin >> n;
    vector<long long int> v;
    set<long long int> s;

    for (long long int p = 0; p < n; p++)
    {
      long long int x;
      cin >> x;
      if ((x <= n) && (!s.count(x)))
      {
        s.insert(x);
      }
      else
      {
        v.push_back(x);
      }
    }

    sort(v.begin(), v.end());

    long long int cnt(v.size()), val(0);
    for (long long int p = 1; p <= n; p++)
    {
      if (s.count(p))
      {
        continue;
      }
      if (v[val] <= 2 * p)
      {
        cnt = -1;
        break;
      }
      ++val;
    }
    cout << cnt << "\n";
  }
  return 0;
}