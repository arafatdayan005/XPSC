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
    long long int n, mx = 0;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    long long int arr[n];
    bool flag = 1;

    for (long long int i = 0; i < n; i++)
    {
      cin >> arr[i];
      mx = max(mx, v[i] - arr[i]);
    }

    for (long long int i = 0; i < n; i++)
    {
      if (v[i] - mx < arr[i] && arr[i] != 0)
      {
        flag = 0;
      }
    }

    if (flag)
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