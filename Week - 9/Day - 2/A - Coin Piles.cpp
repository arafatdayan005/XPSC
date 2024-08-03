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
    long long int x, y;
    cin >> x >> y;

    if (x > y)
    {
      swap(x, y);
    }

    long long int sum = x + y;
    if (2 * x >= y and sum % 3 == 0)
    {
      cout << "YES" << "\n";
    }
    else{
      cout << "NO" << "\n";
    }      
  }
  return 0;
}