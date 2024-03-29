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
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == ')' and count)
      {
        count--;
      }

      if (s[i] == '(')
      {
        count++;
      }
    }
    cout << count << '\n';
  }
  return 0;
}