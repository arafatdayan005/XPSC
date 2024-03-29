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
    int n, k, even = 0, odd = 0;
    string s;
    cin >> n >> k >> s;
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
      a[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
      even += a[i] - (a[i] % 2);
      odd += (a[i] % 2);
    }
    
    if (k >= odd - 1)
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