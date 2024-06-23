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
    long long int n, k;
    cin >> n >> k;
    vector<long long int> v(n);

    k %= (n + 1);
    long long int sum = n * (n + 1) / 2, s = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      s += v[i];
    }

    v.push_back(sum - s);

    for (int i = 0; i < n; i++){
      cout << v[(i - k + n + 1) % (n + 1)] << " ";
    } 
    cout << "\n";
  }
  return 0;
}