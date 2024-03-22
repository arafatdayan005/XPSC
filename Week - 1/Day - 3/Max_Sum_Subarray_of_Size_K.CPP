class Solution
{
public:
  long maximumSumSubarray(int K, vector<int> &Arr, int N)
  {
    long long int l = 0, r = 0, sum = 0, ans = 0;
    
    while (r < N)
    {
      sum += Arr[r];
      if (r - l + 1 == K)
      {
        ans = max(sum, ans);
        sum -= Arr[l];
        r++;
        l++;
      }
      else
        r++;
    }
    return ans;
  }
};