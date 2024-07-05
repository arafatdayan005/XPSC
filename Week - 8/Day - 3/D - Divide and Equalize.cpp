#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    map<long long int, long long int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
      long long int val = v[i];
      for (int i = 2; i * i <= val; i++)
      {
        if (val % i == 0)
        {
          while (val % i == 0)
          {
            mp[i]++;
            val /= i;
          }
        }
      }
      if (val > 1)
      {
        mp[val]++;
      }
    }

    bool flag = true;

    for (auto v : mp)
    {
      if (v.second % n != 0)
      {
        flag = false;
        break;
      }
    }
    if (flag)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
  return 0;
}