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
    string s;
    cin >> s;
    bool flag = false;

    for (int i = 0; i < (s.size() / 2) - 1; i++)
    {
      if (s[i] != s[i + 1])
      {
        flag = true;
        break;
      }
    }

    if (flag)
    {
      cout << "Yes" << "\n";
    }
    else
    {
      cout << "No" << "\n";
    }
  }
  return 0;
}