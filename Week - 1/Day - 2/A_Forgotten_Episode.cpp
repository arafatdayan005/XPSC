#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long int t;
  cin >> t;
  long long int arr[t + 1] = {0};

  for (long long int i = 0; i < t; i++)
  {
    long long int ep;
    cin >> ep;
    arr[ep] = 1;
  }

  for (long long int i = 1; i <= t; i++)
  {
    if (arr[i] == 0)
    {
      cout << i << endl;
    }
  }
  return 0;
}