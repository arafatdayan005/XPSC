#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int frq[26] = {0};
  for (char c : s)
  {
    frq[c - 'a']++;
  }
  for (char i = 'a'; i <= 'z'; i++)
  {
    if (frq[i - 'a'] == 0)
    {
      cout << i << '\n';
      return 0;
    }
  }
  cout << "None" << '\n';
  return 0;
}