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

    string s;
    cin >> s;

    string cmp = "meow";

    for (int i = 0; i < n; i++)
    {
      if (s[i] <= 90)
      {
        s[i] += 32;
      }
    }

    string str = "";

    for (int i = 0; i < n; i++)
    {
      if (str.empty() or str.back() != s[i])
      {
        str.push_back(s[i]);
      }
    }

    if (str == cmp)
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