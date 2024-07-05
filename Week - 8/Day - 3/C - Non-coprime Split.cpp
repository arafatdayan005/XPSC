#include <bits/stdc++.h>
using namespace std;

long long int getPrime(long long int n)
{
  if (n % 2 == 0)
  {
    return 2;
  }

  for (long long int i = 3; i <= sqrt(n); i = i + 2)
  {
    if (n % i == 0)
    {
      return i;
    }
  }

  if (n > 2)
  {
    return n;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int l, r;
    cin >> l >> r;

    if (r <= 3)
    {
      cout << -1 << "\n";
    }
    else
    {
      if (l < r)
      {
        if (r % 2 != 0)
        {
          r--;
        }
        cout << 2 << " " << r - 2 << "\n";
      }
      else
      {
        long long int prime = getPrime(l);
        if (prime == l)
        {
          cout << -1 << "\n";
        }
        else
        {
          cout << prime << " " << l - prime << "\n";
        }
      }
    }
  }
  return 0;
}