#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, mx = INT_MIN;
  cin >> n;
  vector<long long int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    mx = max(mx, v[i]);
  }

  long long int gcds = 0;
  long long int sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (v[i] == mx)
    {
      continue;
    }
    gcds = gcd((mx - v[i]), gcds);
    sum += (mx - v[i]);
  }

  cout << sum / gcds << " " << gcds << "\n";
  return 0;
}