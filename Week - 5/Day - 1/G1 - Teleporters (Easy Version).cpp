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
    long long int n, c, sum = 0, ans = 0;
    cin >> n >> c;
    vector<long long int> v(1);

    for (int i = 1; i <= n; i++)
    {
      long long int x;
      cin >> x;
      v.push_back(x + i);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
      if (sum + v[i] > c)
      {
        break;
      }
      sum += v[i];
      ans = i;
    }
    cout << ans << "\n";
  }
  return 0;
}