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
    long long int a, b, n, ans = 0;
    cin >> a >> b >> n;
    vector<long long int> v(n);

    if (b >= a)
    {
      ans = a;
      b = a;
    }
    else
    {
      ans = b;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (v[i] + 1 <= a)
      {
        ans += v[i];
      }
      else
      {
        ans += a - 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}