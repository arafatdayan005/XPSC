#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  if (n <= 3)
  {
    if (n == 1)
    {
      cout << 1;
    }
    else
    {
      cout << "NO SOLUTION";
    }
  }
  else
  {
    vector<long long int> temp;
    for (int i = 2; i <= n; i += 2)
    {
      cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2)
    {
      cout << i << " ";
    }
  }
  cout << "\n";
  return0;
}