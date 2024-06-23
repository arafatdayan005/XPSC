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
    long long int n, m, x;
    cin >> n >> m >> x;

    vector<long long int> v(m);
    vector<char> ch(m);

    for (int i = 0; i < m; i++)
    {
      cin >> v[i] >> ch[i];
    }

    set<long long int> ans;
    set<long long int> res;
    ans.insert(x);

    for (int i = 0; i < m; i++)
    {
      if (ch[i] == '0')
      {
        set<long long int> tans;
        for (auto &it : ans)
        {
          long long int a = it + v[i];
          if (a > n)
          {
            a -= n;
          }
          tans.insert(a);
          if (i == m - 1)
          {
            res.insert(a);
          }
        }
        ans = tans;
      }
      else if (ch[i] == '1')
      {
        set<long long int> tans;
        for (auto &it : ans)
        {
          long long int a = it - v[i] + n;
          if (a > n)
          {
            a -= n;
          }
          tans.insert(a);
          if (i == m - 1)
          {
            res.insert(a);
          }
        }
        ans = tans;
      }
      else
      {
        set<long long int> tans;
        for (auto &it : ans)
        {
          long long int a = it + v[i];
          if (a > n)
          {
            a -= n;
          }
          tans.insert(a);
          if (i == m - 1)
          {
            res.insert(a);
          }
          a = it - v[i] + n;
          if (a > n)
          {
            a -= n;
          }
          tans.insert(a);
          if (i == m - 1)
          {
            res.insert(a);
          }
        }
        ans = tans;
      }
    }
    cout << res.size() << "\n";
    for (auto &it : res)
    {
      cout << it << " ";
    }
    cout << "\n";
  }
  return 0;
}