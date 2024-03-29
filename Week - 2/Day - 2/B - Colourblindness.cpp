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
    string s, t;
    cin >> s >> t;

    bool flag = true;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'G' && t[i] == 'R')
      {
        flag = false;
        break;
      }
      else if (s[i] == 'B' && t[i] == 'R')
      {
        flag = false;
        break;
      }
      else if (s[i] == 'R' && t[i] != 'R')
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