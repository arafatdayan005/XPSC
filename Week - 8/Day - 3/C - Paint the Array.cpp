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
    long long int n, gcd1 = -1, gcd2 = -1;
    cin >> n;
    vector<long long int> v;

    for (long long int i = 1; i <= n; i++)
    {
      long long int x;
      cin >> x;
      if (i % 2 == 0)
      {
        if (gcd2 != -1)
        {
          gcd2 = __gcd(gcd2, x);
        }
        else
        {
          gcd2 = x;
        }
      }
      else
      {
        if (gcd1 != -1)
        {
          gcd1 = __gcd(gcd1, x);
        }
        else
        {
          gcd1 = x;
        }
      }
      v.push_back(x);
    }

    bool flag = false;

    for (int i = 0; i < n; i += 2)
    {
      if ((v[i] % gcd2) == 0)
      {
        flag = true;
        break;
      }
    }

    if (flag)
    {
      bool flag1 = false;
      for (int i = 1; i < n; i += 2)
      {
        if ((v[i] % gcd1) == 0)
        {
          flag1 = true;
          break;
        }
      }
      if (flag1)
      {
        cout << 0 << "\n";
      }
      else
      {
        cout << gcd1 << "\n";
      }
    }
    else
    {
      cout << gcd2 << "\n";
    }
  }
  return 0;
}