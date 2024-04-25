#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(long long int x)
{
  long long int tmp = x;
  long long int rev = 0;
  while (tmp)
  {
    long long int val = tmp % 10;
    rev = rev * 10 + val;
    tmp /= 10;
  }
  if (x == rev)
  {
    return true;
  }
  return false;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;

  while (t--)
  {
    long long int n, cnt = 0;
    cin >> n;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    long long int a = 2, b = 15, ans = 1;

    while (b > 0)
    {
      if (b & 1)
      {
        ans = ans * a;
      }
      a *= a;
      b >>= 1;
    }

    unordered_map<long long int, long long int> mp, p;

    for (int i = 0; i < ans; i++)
    {
      if (isPalindrome(i))
      {
        p[i]++;
      }
    }

    for (int i = 0; i < n; i++)
    {
      long long int x = v[i];
      mp[x]++;
      for (auto i : p)
      {
        long long int y = i.first;
        long long int z = y ^ x;
        cnt += mp[z];
      }
    }
    cout << cnt << "\n";
  }
  return 0;
}