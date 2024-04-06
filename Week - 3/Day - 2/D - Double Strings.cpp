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
    vector<string> v(n);
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      mp[v[i]]++;
    }

    for (auto s : v)
    {
      int a = 0, b = s.size() - 1;
      bool flag = 0;
      while (a < b && !flag)
      {
        string s1 = s.substr(a, b);
        string s2 = s.substr(b, n - b + 1);
        if (mp[s1] > 0 && mp[s2] > 0)
        {
          flag = 1;
        }
        b--;
      }
      cout << flag;
    }
    cout << "\n";
  }
  return 0;
}