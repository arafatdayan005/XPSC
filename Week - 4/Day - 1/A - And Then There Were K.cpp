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
    int n;
    cin >> n;
    int ans = log2(n);
    cout << ((1 << ans) - 1) << "\n";
  }
  return 0;
}