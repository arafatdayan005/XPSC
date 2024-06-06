#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, x = 0;
  cin >> n;
  string s[] = {"b", "b", "a", "a"};
  for (int i = 0; i < n; i++)
  {
    cout << s[x];
    x++;
    if (x == 4)
    {
      x = 0;
    }
  }
  cout << "\n";
  return 0;
}