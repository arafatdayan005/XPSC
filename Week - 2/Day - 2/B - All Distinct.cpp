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
    int n, x;
    cin >> n;
    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
      cin >> x;
      freq[x]++;
    }

    int ans = freq.size();
    if ((n - ans) % 2)
    {
      ans--;
    }
    cout << ans << '\n';
  }
  return 0;
}