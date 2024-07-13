#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, m;
  cin >> n >> m;

  multiset<long long int> tick;
  vector<long long int> v(m);

  for (int i = 0; i < n; i++)
  {
    long long int x;
    cin >> x;
    tick.insert(x);
  }

  for (int i = 0; i < m; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < m; i++)
  {
    auto it = tick.upper_bound(v[i]);

    if (it == tick.begin())
    {
      cout << -1 << "\n";
    }
    else
    {
      it--;
      cout << *it << "\n";
      tick.erase(it);
    }
  }
  return 0;
}