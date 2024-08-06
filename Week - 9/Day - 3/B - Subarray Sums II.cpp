#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, x;
  cin >> n >> x;
  vector<long long int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  long long int sum = 0, ans = 0;
  map<long long int, long long int> mp;

  mp[0]++;

  for (int i = 0; i < n; i++)
  {
    sum += v[i];
    ans += mp[sum - x];
    mp[sum]++;
  }
  cout << ans << "\n";
  return 0;
}