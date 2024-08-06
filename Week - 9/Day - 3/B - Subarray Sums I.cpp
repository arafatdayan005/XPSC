#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n >> x;

  vector<long long int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  long long int left = 0, right = 0, sum = 0, ans = 0;

  while (right < n)
  {
    sum += v[right];

    if (sum == x)
    {
      ans++;
    }

    while (sum > x)
    {
      sum -= v[left];
      left++;
      if (sum == x)
      {
        ans++;
      }
    }
    right++;
  }
  cout << ans << "\n"; 
  return 0;
}