#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<long long int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n, cnt = 0;
    cin >> n;
    vector<long long int> v(n), rem(n);

    for (long long int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (auto x : prime)
    {
      bool ok = false;
      for (long long int i = 0; i < n; i++)
      {
        if (rem[i] == 0 && v[i] % x == 0)
        {
          if (!ok)
          {
            ok = true;
            ++cnt;
          }
          rem[i] = cnt;
        }
      }
    }
    
    cout << cnt << "\n";

    for (auto x : rem)
    {
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}