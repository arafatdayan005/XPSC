#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    long long int sum = 0, curr = 0, ans = 0;

    for (long long int i = 0; i < n; i++)
    {
      cin >> v[i];
      sum += v[i];
    }

    for (long long int i = 0; i < n - 1; i++)
    {
      curr += v[i];
      sum -= v[i];
      ans = max(ans, __gcd(curr, sum));
    }
    cout << ans << "\n";
  }
  return 0;
}