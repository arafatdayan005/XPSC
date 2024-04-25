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
    int n, s, tmp1, tmp2;
    cin >> n >> s;
    tmp1 = tmp2 = s;

    for (int i = 0; i < n - 1; i++)
    {
      cin >> s;
      tmp1 |= s;
      tmp2 &= s;
    }
    cout << tmp1 - tmp2 << "\n";
  }
  return 0;
}