#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    long long int n, k, cnt = 0, val = 0;
    cin >> n >> k;
    vector<long long int> v(k);

    for (int i = 0; i < k; i++)
    {
      cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < k; i++)
    {
      long long int temp = v[i];
      long long int dist = n - v[i];
      if (val < temp)
      {
        cnt++;
        val += dist;
      }
      else
      {
        break;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}