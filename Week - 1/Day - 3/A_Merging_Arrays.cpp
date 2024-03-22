#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, a = 0, b = 0;
  cin >> n >> m;
  vector<int> x(n), y(m);

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  for (int i = 0; i < m; i++)
  {
    cin >> y[i];
  }

  while (a < n || b < m)
  {
    if (a < n && b < m)
    {
      if (x[a] < y[b])
      {
        cout << x[a] << " ";
        a++;
      }
      else if (x[a] > y[b])
      {
        cout << y[b] << " ";
        b++;
      }
      else
      {
        cout << x[a] << " " << y[b] << " ";
        a++;
        b++;
      }
    }
    else if (a < n)
    {
      cout << x[a] << " ";
      a++;
    }
    else if (b < m)
    {
      cout << y[b] << " ";
      b++;
    }
  }
  return 0;
}