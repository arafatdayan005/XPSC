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
    long long int val = 0, ans = 0, mn = INT_MAX;    

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      if (v[i] < 0)
      {
        val++;
      }
      ans += abs(v[i]);
      mn = min(mn, abs(v[i]));
    }

    if ((val & 1) == 1)
    {
      ans -= (2LL * mn);
    }
    cout << ans << "\n";
  }
  return 0;
}