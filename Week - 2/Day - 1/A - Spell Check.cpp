#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  string str = "Timru"; 

  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    if (s == str)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}