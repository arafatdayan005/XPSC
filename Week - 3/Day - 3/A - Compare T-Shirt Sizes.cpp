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
    string a, b;
    cin >> a >> b;

    char m = a.back();
    char n = b.back();

    if (m == n)
    {
      if (a.size() == b.size())
      {
        cout << '=' << "\n";
      }
      else if (m == 'S')
      {
        if (a.size() < b.size())
        {
          cout << '>' << "\n";
        }
        else
        {
          cout << '<' << "\n";
        }
      }
      else
      {
        if (a.size() < b.size())
        {
          cout << '<' << "\n";
        }
        else
        {
          cout << '>' << "\n";
        }
      }
    }
    else
    {
      if (m < n)
      {
        cout << '>' << "\n";
      }
      else
      {
        cout << '<' << "\n";
      }
    }
  }
  return 0;
}