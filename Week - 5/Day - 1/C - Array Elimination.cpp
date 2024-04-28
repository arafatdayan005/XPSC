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
    int n;
    cin >> n;
    vector<int> v, bit(31);

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }

    for (int i = 0; i < 30; i++)
    {
      int temp = (1 << i);
      for (int j = 0; j < n; j++)
      {
        if ((v[j] & temp) != 0)
        {
          bit[i]++;
        }
      }
    }

    for (int i = 1; i <= n; i++)
    {
      bool flag = 0;
      for (int j = 0; j < 30; j++)
      {
        if ((bit[j] % i) != 0)
        {
          flag = 1;
          break;
        }
      }
      if (flag == 0)
      {
        cout << i << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}