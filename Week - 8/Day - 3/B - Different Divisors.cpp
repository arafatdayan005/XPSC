#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n;
    cin >> n;
    vector<long long int> v;

    for (long long int i = n + 1;; i++)
    {
      bool find = true;
      for (long long int j = 2; j * j <= i; j++)
        if (i % j == 0)
        {
          find = false;
          break;
        }

      if (find)
      {
        v.push_back(i);
        break;
      }
    }

    for (long long int i = v.back() + n;; i++)
    {
      bool find = true;
      for (long long int j = 2; j * j <= i; j++)
        if (i % j == 0)
        {
          find = false;
          break;
        }

      if (find)
      {
        v.push_back(i);
        break;
      }
    }

    cout << min(v[0] * v[1], v[0] * v[0] * v[0]) << "\n";
  }
  return 0;
}