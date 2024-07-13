#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, x;
  cin >> n >> x;
  vector<pair<long long int, long long int>> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first;
    v[i].second = i + 1;
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < n - 2; i++)
  {
    long long int j = i + 1, k = n - 1;
    while (j < k)
    {
      long long int sum = v[i].first + v[j].first + v[k].first;
      if (sum == x)
      {
        cout << v[i].second << " " << v[j].second << " " << v[k].second << "\n";
        return 0;
      }
      if (sum < x)
      {
        j++;
      }
      else if (sum > x)
      {
        k--;
      }
    }
  }
  cout << "IMPOSSIBLE" << "\n";
  return 0;
}