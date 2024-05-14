#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, k;
  cin >> n >> k;
  long long int v[n];

  for (long long int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }

  sort(v + 1, v + n + 1);

  long long int l = 1, r = 2e9, ans;

  while (l <= r)
  {
    long long int mid = l + (r - l) / 2, x = 0;
    for (int i = n / 2; i < n; i++)
    {
      if (v[i] < mid)
      {
        x += mid - v[i];
      }
    }

    if (x <= k)
    {
      ans = mid, l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }
  cout << ans << "\n";

  return 0;
}