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
    int val = n * (n - 1) / 2;
    vector<int> v(val);
    for (int i = 0; i < val; i++)
    {
      cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < val; i += n)
    {
      cout << v[i] << " ";
      n--;
    }
    cout << v[val - 1] << '\n';
  }
  return 0;
}