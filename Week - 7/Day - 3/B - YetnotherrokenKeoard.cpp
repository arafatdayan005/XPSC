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
    string str;
    cin >> str;
    vector<pair<char, int>> upper;
    vector<pair<char, int>> lower;

    for (int i = 0; i < str.size(); i++)
    {
      char ch = str[i];
      if (ch == 'b')
      {
        if (!lower.empty())
        {
          str[lower.back().second] = '*';
          lower.pop_back();
        }
      }
      else if (ch == 'B')
      {
        if (!upper.empty())
        {
          str[upper.back().second] = '*';
          upper.pop_back();
        }
      }
      else if (ch >= 'a' && ch <= 'z')
      {
        lower.push_back({ch, i});
      }
      else if (ch >= 'A' && ch <= 'Z')
      {
        upper.push_back({ch, i});
      }
    }
    for (auto v : str)
    {
      if (v != 'b' && v != 'B' && v != '*')
      {
        cout << v;
      }
    }
    cout << "\n";
  }
  return 0;
}