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
    int n, maxnum = INT_MIN, cnt = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      mp[v[i]]++;
    }
    for (auto i : mp)
    {
      maxnum = max(maxnum, i.second);
    }

    while (maxnum < n)
    {
      cnt++;
      cnt += min(n - maxnum, maxnum);
      maxnum += min(n - maxnum, maxnum);
    }
    cout << cnt << "\n";
  }
  return 0;
}