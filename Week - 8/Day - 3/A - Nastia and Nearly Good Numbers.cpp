#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int a, b;
    cin >> a >> b;
    if (b == 1)
    {
      cout << "NO" << "\n";
    }
    else
    {
      cout << "YES" << "\n";
      long long int sum = (a * b * 2);
      long long int y = sum - a;
      cout << a << " " << y << " " << sum << "\n";
    }
  }
  return 0;
}