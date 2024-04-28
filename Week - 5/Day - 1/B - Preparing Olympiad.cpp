#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, l, r, x, ans = 0;
  cin >> n >> l >> r >> x;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < (1 << n); i++)
  {
    int cnt = 0, mini = INT_MAX, maxi = INT_MIN, temp = 0;
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {
        temp++;
        cnt += v[j];
        mini = min(mini, v[j]);
        maxi = max(maxi, v[j]);
      }
    }
    if (cnt >= l && cnt <= r && temp >= 2 && maxi - mini >= x)
    {
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}