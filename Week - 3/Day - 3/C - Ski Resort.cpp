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
    long long int n, k, q, a = 0, ans = 0, count = 0;
    cin >> n >> k >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    while (a < n)
    {
      while (arr[a] <= q and a < n)
      {
        count++;
        a++;
        if (count >= k)
        {
          ans += (count - k) + 1;
        }
      }
      count = 0;
      a++;
    }

    cout << ans << "\n";
  }
  return 0;
}