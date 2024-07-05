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
    long long int n;
    cin >> n;

    vector<long long int> v(1005, -1);

    for (long long int i = 0; i < n; i++)
    {
      long long int x;
      cin >> x;
      if (v[x] < i + 1)
      {
        v[x] = i + 1;
      }
    }

    long long int val = -1;

    for (long long int i = 0; i <= 1000; i++)
    {
      for (long long int j = i; j <= 1000; j++)
      {
        if (v[i] > 0 and v[j] > 0)
        {
          if (gcd(i, j) == 1)
          {
            val = max(val, v[i] + v[j]);
          }
        }
      }
    }
    cout << val << "\n";
  }
  return 0;
}