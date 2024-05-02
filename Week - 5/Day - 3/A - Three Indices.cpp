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
    int n, flag = 0;;
    cin >> n;
    vector<int> v(1);
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }

    for (int i = 2; i < n; i++)
    {
      if (v[i] > v[i - 1] && v[i] > v[i + 1])
      {
        flag = i;
      }
    }
    if (flag > 0)
    {
      cout << "YES" << "\n" << flag - 1 << " " << flag << " " << flag + 1 << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
  return 0;
}