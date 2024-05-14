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
    long long int n, ans;
    cin >> n;
    long long int v[n];

    for (long long int i = 1; i <= n; i++)
    {
      cin >> v[i];
    }

    sort(v + 1, v + n + 1);

    for (ans = (n + 1) / 2; ans; ans--)
    {
      int flag = 1;
      for (int i = 1; i <= ans && flag; i++)
      {
        if (v[i + ans - 1] > i)
        {
          flag = 0;
        }
      }

      if (flag)
      {
        break;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}