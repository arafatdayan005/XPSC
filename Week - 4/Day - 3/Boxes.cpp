#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n, sum = 0, cnt = 0;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<long long int>());

    for (int i = 0; i < n; i++)
    {
      if (sum < v[i])
      {
        sum = 0;
        cnt++;
      }
      sum ^= v[i];
    }
    cout << cnt << endl;
  }
  return 0;
}