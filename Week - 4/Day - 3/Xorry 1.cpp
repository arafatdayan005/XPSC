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
    long long a;
    cin >> a;
    long long x = a, cnt = 0;
    while (x > 1)
    {
      x = x / 2;
      cnt++;
    }
    long long ans = pow(2, cnt);
    cout << a - ans << " " << ans << "\n";
  }
  return 0;
}