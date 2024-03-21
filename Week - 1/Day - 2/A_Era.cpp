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
    int a;
    cin >> a;
    int b = 0;
    int x;
    for (int i = 1; i <= a; i++)
    {
      cin >> x;
      if (x - i > b)
      {
        b = x - i;
      }
    }
    cout << b << endl;
  }
  return 0;
}