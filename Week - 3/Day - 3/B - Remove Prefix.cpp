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
    int n, cnt = 0;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
      if (mp[v[i]] == 0)
      {
        cnt++;
        mp[v[i]]++;
      }
      else
      {
        break;
      }
    }
    cout << n - cnt << "/n";
  }
  return 0;
}