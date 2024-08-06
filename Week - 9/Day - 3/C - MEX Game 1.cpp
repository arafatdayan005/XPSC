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
    int n, ans;
    cin >> n;
    vector<int> arr(n), freq(n + 5);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      freq[arr[i]]++;
    }

    bool flag = false;

    for (int i = 0; i < n + 5; i++)
    {
      if (freq[i] == 0)
      {
        ans = i;
        break;
      }
      else if (freq[i] == 1)
      {
        if (flag)
        {
          ans = i;
          break;
        }
        flag = true;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}