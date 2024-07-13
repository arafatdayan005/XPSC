#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, val = 0;
  cin >> n;

  vector<long long int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (v[i] > v[i + 1])
    {
      val += (v[i] - v[i + 1]);
      v[i + 1] = v[i];
    }
  }
  cout << val << "\n";
  return 0;
}