#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  cin >> a >> b;

  if (a == b)
  {
    cout << a + b << '\n';
  }
  else
  {
    cout << max(a, b) + max(a, b) - 1 << '\n';
  }
  return 0;
}