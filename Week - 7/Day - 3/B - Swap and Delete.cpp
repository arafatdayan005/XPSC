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
    string str;
    cin >> str;

    int n = str.size();
    int o = 0, z = 0;

    for (int i = 0; i < n; i++)
    {
      if (str[i] == '1')
      {
        o++;
      }
      else
      {
        z++;
      }
    }

    for (int i = 0; i < n; i++)
    {
      if (str[i] == '1')
      {
        if (z > 0)
        {
          z--;
        }
        else
        {
          break;
        }
      }
      else
      {
        if (o > 0)
        {
          o--;
        }
        else
        {
          break;
        }
      }
    }
    cout << o + z << "\n";
  }
  return 0;
}