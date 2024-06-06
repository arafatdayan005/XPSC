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
    long long int n;
    cin >> n;
    vector<long long int> v;
    string ans = "";
    bool broken = false;

    for (long long int i = 0; i < n; i++)
    {
      long long int x;
      cin >> x;
      if (v.empty())
      {
        ans.push_back('1');
        v.push_back(x);
      }
      else
      {
        if (broken)
        {
          if (x < v.back())
            ans.push_back('0');
          else
          {
            if (x > v[0])
              ans.push_back('0');
            else
            {
              ans.push_back('1');
              v.push_back(x);
            }
          }
        }
        else
        {
          if (x >= v.back())
          {
            ans.push_back('1');
            v.push_back(x);
          }
          else
          {
            if (x > v[0])
            {
              ans.push_back('0');
            }
            else
            {
              broken = true;
              ans.push_back('1');
              v.push_back(x);
            }
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}