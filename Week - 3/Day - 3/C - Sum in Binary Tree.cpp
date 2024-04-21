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
    long long int n, sum = 0;
    cin >> n;

    while (n)
    {
      sum += n;
      n = n / 2;
    }
    cout << sum << endl;
  }
  return 0;
}