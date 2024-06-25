#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, x, res = 1;
  cin >> n;
  unordered_map<long long int, long long int> pkmn;

  while (n--)
  {
    cin >> x;
    long long int sqx = sqrt(x);
    for (long long int i = 2; i <= sqx; i++)
    {
      if (x % i == 0)
      {
        pkmn[i]++;
      }
      while (x % i == 0)
      {
        x /= i;
      }
    }
    if (x > 1)
    {
      pkmn[x]++;
    }
  }

  for (auto p : pkmn)
  {
    res = max(res, p.second);
  }
  cout << res << "\n";
  return 0;
}