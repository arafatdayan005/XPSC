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
    int n,cnt = 0;
    cin >> n;
    map<int, int> mp1;

    for (int i = 0; i < (n * n) - n; i++)
    {
      int x;
      cin >> x;
      if (cnt == n - 1)
      {
        cnt = 0;
      }
      mp1[x] += cnt;
      cnt++;
    }

    map<int, int> mp2;

    for (auto x : mp1)
    {
      mp2[x.second] = x.first;
    }

    for (auto x : mp2)
    {
      cout << x.second << " ";
    }
    cout << "\n";
  }
  return 0;
}