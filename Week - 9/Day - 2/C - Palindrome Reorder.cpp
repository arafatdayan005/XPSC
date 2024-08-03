#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;

  map<char, int> mp;
  char ch;
  int cnt = 0;

  for (char c : s)
  {
    mp[c]++;
  }

  for (auto [x, y] : mp)
  {
    if (y % 2)
    {
      ch = x;
      cnt++;
    }
  }

  if ((s.size() % 2 == 0 and cnt > 0) or cnt > 1)
  {
    cout << "NO SOLUTION" << "\n";
  }
  else
  {
    string ans = "";

    for (auto [x, y] : mp)
    {
      for (int i = 0; i < y / 2; i++)
      {
        ans += x;
      }
    }

    cout << ans;

    if (s.size() & 1)
    {
      cout << ch;
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
  }
  return 0;
}