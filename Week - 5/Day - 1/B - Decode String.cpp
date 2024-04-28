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

    string s, str = "";
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--)
    {
      if (s[i] == '0')
      {
        i--;
        string temp = "";
        temp = +s[i];
        i--;
        temp += s[i];
        reverse(temp.begin(), temp.end());
        int num = stoi(temp);
        char ch = num + 96;
        str += ch;
      }
      else
      {
        int num = s[i] - 48;
        char ch = num + 96;
        str += ch;
      }
    }
    reverse(str.begin(), str.end());
    cout << str << "\n";
  }
  return 0;
}