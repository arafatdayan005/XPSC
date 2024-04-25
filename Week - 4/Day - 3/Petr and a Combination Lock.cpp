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

    for (long long int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    long long int flag = 0;
    long long int b = (1 << n);
    for (long long int i = 0; i < b; i++)
    {
      long long int ans = 0;
      for (long long int j = 0; j < n; j++)
      {
        if (i & (1 << j))
        {
          ans += v[j];
        }
        else
        {
          ans -= v[j];
        }
      }

      if (ans % 360 == 0)
      {
        flag = 1;
        break;
      }
    }

    if (flag == 1)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "No" << "\n";
    }
  }
  return 0;
}