#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int k, s, count = 0;
  cin >> k >> s;

  for (int i = 0; i <= k; i++)
  {
    for (int j = 0; j <= k; j++)
    {
      int l = s - i - j;
      if (l >= 0 && l <= k)
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}