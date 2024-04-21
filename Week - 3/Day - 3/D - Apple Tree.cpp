#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
vector<int> adj[N];
vector<long long> val;

void dfs(int c, int p)
{
  bool child = false;
  for (auto x : adj[c])
  {
    if (x != p)
    {
      child = true;
      dfs(x, c);
      val[c] += val[x];
    }
  }
  if (!child)
  {
    val[c] = 1;
  }
}

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

    for (int i = 0; i <= n; i++)
    {
      adj[i].clear();
    }

    val.assign(n + 2, 0);

    for (int i = 1; i <= n - 1; i++)
    {
      int x, y;
      cin >> x >> y;
      adj[x].push_back(y);
      adj[y].push_back(x);
    }

    dfs(1, -1);
    int q;
    cin >> q;

    while (q--)
    {
      int x, y;
      cin >> x >> y;
      long long int ans = val[x] * val[y];
      cout << ans << "\n";
    }
  }
  return 0;
}