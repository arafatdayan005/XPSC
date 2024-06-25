#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, k;
  cin >> n >> k;

  vector<long long int> v;

  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      if ((n / i) != i)
      {
        v.push_back(n / i);
      }
    }
  }

  sort(v.begin(), v.end());

  if (v.size() < k)
  {
    cout << -1 << "\n";
  }
  else
  {
    cout << v[k - 1] << "\n";
  }
}