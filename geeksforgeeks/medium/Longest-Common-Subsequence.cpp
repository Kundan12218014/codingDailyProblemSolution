#include <bits/stdc++.h>
using namespace std;
class Solution
{
  // This solution is Top Down Dynamic Programming or memoization
public:
  int dp[1001][1001];
  int LCS(string &s1, string &s2, int i, int j)
  {
    if (i == s1.size() || j == s2.size())
    {
      return 0;
    }
    if (dp[i][j] != -1)
    {
      return dp[i][j];
    }
    if (s1[i] == s2[j])
    {
      return dp[i][j] = 1 + LCS(s1, s2, i + 1, j + 1);
    }
    else
    {
      return dp[i][j] = max(LCS(s1, s2, i + 1, j), LCS(s1, s2, i, j + 1));
    }
  }
  int lcs(string &s1, string &s2)
  {
    memset(dp, -1, sizeof(dp));
    return LCS(s1, s2, 0, 0);
  }
};
int main()
{
  string s1 = "ABCBDAB";
  string s2 = "BDCAB";
  Solution sol;
  int result = sol.lcs(s1, s2);
  cout << result;
  return 0;
}