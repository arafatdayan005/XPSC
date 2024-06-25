#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, mid = 0;
  cin >> n;
  mid = (n / 2);
  cout << mid << "\n";

  if (n % 2 == 1)
  {
    cout << 3 << " ";
    for (int i = 0; i < mid - 1; i++)
    {
      cout << 2 << " ";
    }
    cout << "\n";
  }
  else
  {
    for (int i = 0; i < mid; i++)
    {
      cout << 2 << " ";
    }
    cout << "\n";
  }
  return 0;
}