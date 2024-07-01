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
    vector<long long int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
      cin >> arr[i];
    }

    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
      long long int temp = arr[i];
      bool ans = false;
      for (int j = i + 1; j >= 2; j--)
      {
        if (temp % j)
        {
          ans = true;
          break;
        }
      }
      if (!ans)
      {
        flag = false;
      }
    }
    if (flag)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }
    cout << "\n";
  }
  return 0;
}