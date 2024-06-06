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
    long long int n, k, x = 1, mod = 1e9 + 7, ans = 0;
    cin >> n >> k;

    for(int i = 0; i < 31; i++)
    {
      if (k & (1 << i))
      {
        ans = ((ans + x) % mod);
      }
      x *= n;
      x %= mod;
    }
    cout << ans << "\n";
  }
  return 0;
}