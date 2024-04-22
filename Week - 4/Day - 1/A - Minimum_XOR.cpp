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
    int n, Xor = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      Xor ^= arr[i];
    }

    int ans = Xor;

    for (int i = 0; i < n; i++)
    {
      ans = min(ans, (Xor ^ arr[i]));
    }
    cout << ans << "\n";
  }
  return 0;
}