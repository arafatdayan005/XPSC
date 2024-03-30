#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, s, r = 0, l = 0, seg = INT_MAX, sum = 0;
  cin >> n >> s;
  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  while (r < n)
  {
    sum += a[r];

    while (sum >= s)
    {
      seg = min(seg, r - l + 1);
      sum -= a[l];
      l++;
    }
    r++;
  }

  if (seg == INT_MAX)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << seg << endl;
  }

  return 0;
}