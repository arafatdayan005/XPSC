#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c, mult = 1;
  cin >> a >> b >> c;

  while (c * mult <= b)
  {
    if (c * mult >= a)
    {
      cout << c * mult << '\n';
      return 0;
    }
    mult++;
  }

  cout << -1 << '\n';
  return 0;
}