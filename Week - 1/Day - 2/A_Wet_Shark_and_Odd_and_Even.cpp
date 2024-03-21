#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  long long int sum = 0;
  long long int odd = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    long long int a;
    cin >> a;
    sum += a;
    if (a % 2 != 0)
    {
      odd = min(odd, a);
    }
  }
  if (sum % 2 == 0)
  {
    cout << sum << endl;
  }
  else
  {
    cout << sum - odd << endl;
  }

  return 0;
}