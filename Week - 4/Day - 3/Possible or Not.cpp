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
    int s, k, l = 0, r = 1;;
    cin >> s >> k;
    vector<int> v(s);
    
    for (int i = 0; i < s; i++)
    {
      cin >> v[i];
    }

    int ans = -1;

    for (int i = 0; i < s; i++)
    {
      if ((v[i] & k) == k)
      {
        ans &= v[i];
      }
    }

    if (ans == k)
    {
      cout << "Yes" << "\n";
    }
    else
    {
      cout << "No" << "\n";
    }
  }
  return 0;
}