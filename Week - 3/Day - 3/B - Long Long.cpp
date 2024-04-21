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
    long long int n, sum = 0, count = 0, flag = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      long long a;
      cin >> a;
      sum += abs(a);
      if (a > 0)
      {
        flag = 0;
      }
      else if (a < 0 && flag == 0)
      {
        count++;
        flag = 1;
      }
    }
    cout << sum << " " << count <<"\n";
  }
  return 0;
}