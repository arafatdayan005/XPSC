#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector<long long int> pw;

  for (long long int i = 1; i <= 1e4; i++)
  {
    pw.push_back(pow(i, 3));
  }

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int x;
    cin >> x;

    bool found = false;

    for (long long int i = 0; i < 1e4; i++)
    {
      if (pw[i] >= x)
      {
        break;
      }

      long long int left = 0, right = 1e4 - 1, mid;

      long long int rem = x - pw[i];

      bool exist = false;

      while (left <= right)
      {
        mid = left + (right - left) / 2;

        if (pw[mid] == rem)
        {
          exist = true;
          break;
        }

        if (pw[mid] > rem)
        {
          right = mid - 1;
        }
        else
        {
          left = mid + 1;
        }
      }

      if (exist)
      {
        found = true;
        break;
      }
    }

    if (found)
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