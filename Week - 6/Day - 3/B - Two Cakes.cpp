#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, a, b;
  cin >> n >> a >> b;

  long long int l = 1, r = min(a, b), ans = 1;

  while (l <= r)
  {
    long long int m = l + (r - l) / 2;

    if (a / m + b / m >= n)
    {
      l = m + 1;
      ans = m;
    }
    else
    {
      r = m - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}