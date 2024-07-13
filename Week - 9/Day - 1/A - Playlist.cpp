#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> v(n);
  set<int> set;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int i = 0, j = 0, ans = 0;

  while (i < n && j < n)
  {
    while (j < n && !set.count(v[j]))
    {
      set.insert(v[j]);
      ans = max(ans, j - i + 1);
      j++;
    }

    while (j < n && set.count(v[j]))
    {
      set.erase(v[i]);
      i++;
    }
  }
  cout << ans << "\n";
  return 0;
}