#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n;
  cin >> n;
  vector<long long int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  map<long long int, long long int> mp;
  long long int ans = 0, x = 0;

  mp[0] = 1;

  for (int i = 0; i < n; i++)
  {
    x = ((x + v[i]) % n + n) % n;
    ans += mp[x];
    mp[x]++;
  }
  cout << ans << "\n";
  return 0;
}