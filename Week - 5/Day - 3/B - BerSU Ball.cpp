#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, cnt = 0;
  cin >> n;
  vector<int> va, vb;

  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    va.push_back(val);
  }

  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int val;
    cin >> val;
    vb.push_back(val);
  }

  sort(va.begin(), va.end());
  sort(vb.begin(), vb.end());

  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (va[i] - 1 > vb[j])
    {
      j++;
    }
    else if (va[i] < vb[j] - 1)
    {
      i++;
    }
    else
    {
      cnt++, i++, j++;
    }
  }
  cout << cnt;
  return 0;
}