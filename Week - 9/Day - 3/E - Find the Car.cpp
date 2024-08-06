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
    long long int n, k, q;
    cin >> n >> k >> q;

    vector<long long int> a(k + 1), b(k + 1);

    a[0] = 0;
    b[0] = 0;

    for (int i = 1; i <= k; i++)
    {
      cin >> a[i];
    }

    for (int i = 1; i <= k; i++)
    {
      cin >> b[i];
    }

    while (q--)
    {
      long long int d;
      cin >> d;

      if (d == 0)
      {
        cout << 0 << " ";
        continue;
      }

      if (d == n)
      {
        cout << b[k] << " ";
        continue;
      }

      int index = upper_bound(a.begin(), a.end(), d) - a.begin();

      long long int ans = b[index - 1];

      long long int distance = a[index] - a[index - 1];
      long long int time = b[index] - b[index - 1];

      long long int extra_distance = d - a[index - 1];

      long long int extra_time = ((extra_distance * time) / distance);

      ans += extra_time;

      cout << ans << " ";
    }
    cout << "\n";
  }
  return 0;
}