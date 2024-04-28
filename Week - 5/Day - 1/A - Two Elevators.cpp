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
    int a, b, c;
    cin >> a >> b >> c;

    if (abs(a - 1) > abs(b - c) + (c - 1))
    {
      cout << 2 << "\n";
    }
    else if (abs(a - 1) < abs(b - c) + (c - 1))
    {
      cout << 1 << "\n";
    }
    else
    {
      cout << 3 << "\n";
    }
  }
  return 0;
}