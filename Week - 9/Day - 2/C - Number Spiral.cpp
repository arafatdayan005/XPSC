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
    long long int a, b;
    cin >> a >> b;

    if (a > b)
    {
      if (a % 2 == 0)
      {
        cout << a * a - b + 1 << "\n";
      }
      else
      {
        cout << (a - 1) * (a - 1) + b << "\n";
      }
    }
    else
    {
      if (b % 2 == 0)
      {
        cout << (b - 1) * (b - 1) + a << "\n";
      }
      else
      {
        cout << b * b - a + 1 << "\n";
      }
    }
  }
  return 0;
}