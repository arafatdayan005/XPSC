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
    long long int a, b, l, cnt = 0;
    cin >> a >> b >> l;
    vector<long long int> div, ax1, ax2;

    for (long long int i = 1; i * i <= l; i++)
    {
      if (l % i == 0)
      {
        div.push_back(i);
        if ((l / i) != i)
        {
          div.push_back(l / i);
        }
      }
    }

    for (long long int i = 0; i <= 20; i++)
    {
      long long int x = pow(a, i);
      if (x <= 1e6)
      {
        ax1.push_back(x);
      }
      else
      {
        break;
      }
    }

    for (long long int i = 0; i <= 20; i++)
    {
      long long int x = pow(b, i);
      if (x <= 1e6)
      {
        ax2.push_back(x);
      }
      else
      {
        break;
      }
    }

    for (auto d : div)
    {
      bool flag = false;
      for (auto v1 : ax1)
      {
        for (auto v2 : ax2)
        {
          if ((d * v1 * v2) == l)
          {
            cnt++;
            flag = true;
            break;
          }
        }
        if (flag)
        {
          break;
        }
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}