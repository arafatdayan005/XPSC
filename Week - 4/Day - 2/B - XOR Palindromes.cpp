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
    int n, cnt = 0;
    cin >> n;

    string s;
    cin >> s;

    string b;
    for (int i = 0; i < n + 1; i++)
    {
      b += '0';
    }

    for (int i = 0; i <= (n - 1) / 2; i++)
    {
      if (s[i] != s[n - i - 1])
      {
        cnt++;
      }
    }

    b[cnt] = '1';

    for (int i = cnt; i <= n - cnt; i += 2)
    {
      b[i] = '1';
      if (n % 2)
      {
        b[i + 1] = '1';
      }
    }
    for (auto i : b)
    {
      cout << i;
    }
    cout << "\n";
  }
  return 0;
}