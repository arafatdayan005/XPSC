class Solution
{
public:
  int search(string txt, string pat)
  {
    int n1 = pat.length();
    int n2 = txt.length();
    map<int, char> p;
    for (int i = 0; i < n1; i++)
    {
      p[pat[i]]++;
    }

    int l = 0, r = 0, cnt = 0;
    map<int, char> q;

    while (r < n2 + 1)
    {
      if (p == q)
      {
        cnt++;
      }

      if (r < n1)
      {
        q[txt[r]]++;
        r++;
      }
      else
      {
        q[txt[l]]--;

        if (q[txt[l]] == 0)
        {
          q.erase(txt[l]);
        }

        q[txt[r]]++;
        r++;
        l++;
      }
    }
    return cnt;
  }
};