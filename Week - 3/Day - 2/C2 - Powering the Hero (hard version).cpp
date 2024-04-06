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
    long long int n, ans = 0;
    cin >> n;
    vector<long long int> v(n);
    priority_queue<long long int> pq;

    for (long long int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
      if (v[i] > 0)
      {
        pq.push(v[i]);
      }
      else
      {
        if (!pq.empty())
        {
          ans += pq.top();
          pq.pop();
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}