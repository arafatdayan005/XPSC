#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, m, x = 0, y = 0, ans = 0;
  cin >> n >> m;
  vector<int> a(n), b(m);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
  }

  while (x < n && y < m)
  {
    int c = 0, d = 0, curr = a[x];
    while (a[x] == curr)
    {
      c++;
      x++;
    }

    while (curr > b[y])
    {
      y++;
    }

    while (b[y] == curr)
    {
      d++;
      y++;
    }
    ans += (1LL * c * d);
  }
  cout << ans << "\n";
  return 0;
  ;
}