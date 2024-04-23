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
    long long int n, ans = 0;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 30; i >= 0; i--)
    {
      long long int cnt = 0;
      for (int j = 0; j < n; j++)
      {
        if (v[j] >= pow(2, i) and v[j] < pow(2, (i + 1)))
        {
          cnt++;
        }
      }
      ans += (cnt * (cnt - 1)) / 2;
    }
    cout << ans << "\n";
  }
  return 0;
}