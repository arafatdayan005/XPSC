#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int x, y, mult = 0;
  cin >> x >> y;

  while (x <= y)
  {
    x *= 2;
    mult++;
  }
  cout << mult;
  return 0;
}