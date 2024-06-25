#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int x, a1 = 0, a2 = 0;
  cin >> x;

  for (long long int i = 1; i * i <= x; i++)
  {
    if (x % i != 0)
    {
      continue;
    }
    long long int b1 = i, b2 = x / i;
    if (gcd(b1, b2) == 1)
    {
      a1 = b1;
      a2 = b2;
    }
  }
  cout << a1 << " " << a2 << "\n";
}