#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int n, s, l = 0, r = 0, seg = 0, sum = 0;
  cin >> n >> s;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  while (r < n)
  {
    sum += arr[r];
    while (sum > s)
    {
      sum -= arr[l];
      l++;
    }
    seg += r - l + 1;
    r++;
  }
  cout << seg << endl;
  return 0;
}