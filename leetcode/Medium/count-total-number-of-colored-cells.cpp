#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  // approach 1 iterative apporach

  // long long coloredCell(int n)
  // {
  //   long long cellCount = 1;
  //   int time = 1;
  //   while (time <= n)
  //   {
  //     cellCount += 4 * (time - 1);
  //     time++;
  //   }
  //   return cellCount;
  // }

  // approach 2 mathematical approach

  long long coloredCell(int n)
  {
    return 1 + 2 * n * (n - 1) * 1LL; // this could be also written as n*n*1LL+(n-1)*(n-1)*1LL
  }
};
int main()
{
  int n = 5;
  Solution sol;
  int result = sol.coloredCell(n);
  cout << result;
  return 0;
}