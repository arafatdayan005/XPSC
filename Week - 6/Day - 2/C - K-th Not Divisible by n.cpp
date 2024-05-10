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
    long long int n, k, l = 1, r = INT_MAX, mid, ans;
    cin >> n >> k;

    while (l <= r)
    {
      mid = l + (r - l) / 2;
      int x = mid - mid / n;

      if (x > k)
      {
        r = mid - 1;
      }
      else if (x < k)
      {
        l = mid + 1;
      }
      else
      {
        ans = mid;
        r = mid - 1;
      }
    }
    cout << ans << "\n";
    // long long int n, k;
    // cin >> n >> k;
    // long long int ans = k + (k - 1) / (n - 1);
    // cout << ans << "\n";    
  }
  return 0;
}