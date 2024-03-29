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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    int i = 0, j = n - 1;
    bool flag = false;
    int a, b;

    while (i < j)
    {
      if (v[i] != v[j])
      {
        flag = true;
        a = v[i];
        b = v[j];
        break;
      }
      i++, j--;
    }

    if (!flag)
    {
      cout << "YES" << '\n';
    }
    else
    {
      vector<int> v1, v2;
      for (int i = 0; i < n; i++)
      {
        if (v[i] != a)
        {
          v1.push_back(v[i]);
        }

        if (v[i] != b)
        {
          v2.push_back(v[i]);
        }
      }

      bool flag1 = true, flag2 = true;

      int x = v1.size(), y = v2.size();
      for (int i = 0; i < x / 2; i++)
      {
        if (v1[i] != v1[x - 1 - i])
        {
          flag1 = false;
          break;
        };
      }

      for (int i = 0; i < y / 2; i++)
      {
        if (v2[i] != v2[y - 1 - i])
        {
          flag2 = false;
          break;
        };
      }

      if (flag1 || flag2)
      {
        cout << "YES" << '\n';
      }
      else
      {
        cout << "NO" << '\n';
      }
    }
  }
  return 0;
}