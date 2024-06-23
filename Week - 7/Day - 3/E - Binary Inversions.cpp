#include <bits/stdc++.h>
using namespace std;
long long int InvarsecCount(vector<long long int> a, long long int n)
{
  long long int res = 0, one = 0;
  for (long long int i = 0; i < n; i++)
  {
    if (a[i] == 1)
    {
      one++;
    }
    else
    {
      res += one;
    }
  }
  return res;
}

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
    vector<long long int> v(n);

    for (long long int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    long long int ans = InvarsecCount(v, n);
    long long int id = -1;

    for (long long int i = 0; i < n; i++)
    {
      if (v[i] == 0)
      {
        v[i] = 1;
        id = i;
        break;
      }
    }

    ans = max(ans, InvarsecCount(v, n));

    if (id != -1)
    {
      v[id] = 0;
    }

    for (long long int i = n - 1; i >= 0; i--)
    {
      if (v[i] == 1)
      {
        v[i] = 0;
        break;
      }
    }

    ans = max(ans, InvarsecCount(v, n));
    cout << ans << "\n";
  }
  return 0;
}