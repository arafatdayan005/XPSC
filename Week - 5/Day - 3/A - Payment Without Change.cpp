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
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    if (s % n <= b and 1LL * a * n + b >= s)
    {
      cout << "Yes" << "\n";
    }
    else
    {
      cout << "No" << "\n";
    }
  }
  return 0;
}