#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a[1000000] = {0};

  for (int i = 2; i <= 1e6; i++)
  {
    if (a[i] == 0)
    {
      for (int j = 2; i * j <= 1e6; j++)
      {
        a[i * j] = 1;
      }
    }
  }

  long long int n, sq, b;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> b;
    sq = sqrt(b);

    if (sq == 1)
    {
      cout << "NO" << "\n";
    }
    else if (sq * sq == b and a[sq] == 0)
    {
      cout << "YES" << "\n";
    }
    else
    {
      cout << "NO" << "\n";
    }
  }
  return 0;
}