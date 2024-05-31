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
    long long int n, k;
    cin >> n >> k;
    vector<long long int> arr(n), pos, neg;

    for (long long int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (long long int i = 0; i < n; i++)
    {
      if (arr[i] > 0)
      {
        pos.push_back(arr[i]);
      }
      else if (arr[i] < 0)
      {
        neg.push_back(abs(arr[i]));
      }
    }
    long long int ans = 0;
    for (long long int i = pos.size() - 1; i >= 0; i -= k)
    {
      ans += (pos[i] * 2);
    }
    for (long long int i = 0; i < neg.size(); i += k)
    {
      ans += (neg[i] * 2);
    }
    cout << ans - max(abs(arr[0]), abs(arr[n - 1])) << endl;
  }
  return 0;
}