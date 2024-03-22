#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x = 0, y = 0, cnt = 0;
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

  while (y < m)
  {
    while (b[y] > a[x] && x < n)
    {
      cnt++;
      x++;
    }
    y++;
    cout << cnt << " ";
  }
  return 0;
}