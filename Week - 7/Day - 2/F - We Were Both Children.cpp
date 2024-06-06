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
    vector<long long int> cnt(n + 1, 0), mx(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
      long long int x;
      cin >> x;
      if (x <= n)
      {
        cnt[x]++;
      }
    }
    for (int i = 1; i <= n; i++)
    {
      for (int j = i; j <= n; j += i)
      {
        mx[j] += cnt[i];
      }
    }

    long long int m = INT_MIN;

    for (int i = 0; i < mx.size(); i++)
    {
      m = max(m, mx[i]);
    }
    cout << m << "\n";
  }
  return 0;
}