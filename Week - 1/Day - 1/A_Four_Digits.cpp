#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  int a = s.size();

  for (int i = a; i < 4; i++)
  {
    cout << 0;
  }
  cout << s << '\n';
  return 0;
}