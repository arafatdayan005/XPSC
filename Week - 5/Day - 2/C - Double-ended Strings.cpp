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
    string a, b;
    cin >> a >> b;
    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
      for (int j = 0; j < b.size(); j++)
      {
        int x = i, y = j, z = 0;
        while (a[x] == b[y] && y < b.size())
        {
          x++;
          y++;
          z++;
        }
        ans = max(ans, z);
      }
    }
    cout << (a.size() + b.size()) - ans * 2 << "\n";
  }
  return 0;
}