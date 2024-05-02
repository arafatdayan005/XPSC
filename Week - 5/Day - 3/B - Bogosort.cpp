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
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
      int val;
      cin >> val;
      v.push_back(val);
    }

    sort(v.begin(), v.end(), greater<int>());

    for (auto val : v)
    {
      cout << val << " ";
    }
    cout << "\n";
  }
  return 0;
}