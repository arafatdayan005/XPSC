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
    int n;
    cin >> n;

    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    sort(v.begin(), v.end());

    auto ok = [&](long long int mid)
    {
      long long int l = 0, cnt = 1;
      for (int r = 0; r < n; r++)
      {
        if ((v[r] - v[l]) > (2 * mid))
        {
          cnt++;
          l = r;
        }
      }
      return cnt <= 3;
    };

    long long int left = 0, right = 1e15, ans = 0;

    while (left <= right)
    {
      long long int mid = left + (right - left) / 2;
      
      if (ok(mid))
      {
        ans = mid;
        right = mid - 1;
      }
      else
      {
        left = mid + 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}