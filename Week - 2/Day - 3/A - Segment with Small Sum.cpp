#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, s, l = 0, r = 0, seg = 0, sum = 0;
  cin >> n >> s;

  long long int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  while (r < n)
  {
    sum += a[r];
    if (sum <= s)
    {
      seg = max(seg, r - l + 1);
    }
    else
    {
      sum -= a[l];
      l++;
    }
    r++;
  }
  cout << seg << endl;
  return 0;
}