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
    long long int n, s = 0;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
      s = s + v[i];
      if (s < 0)
      {
        s = 0;
      }
    }
    cout << s << "\n";
  }
  return 0;
}