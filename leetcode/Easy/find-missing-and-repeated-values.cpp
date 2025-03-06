#include<bits/stdc++.h>
using namespace std; 
class Solution {
  public:
      vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
          int dupl;
          int count=0;
          set<int>Set;
          for(const auto &row:grid){
              for(const auto & val: row){
                  if(Set.count(val)==1){
                      count++;
                      dupl=val;
                  }
                  Set.insert(val);
              }
          }
          long long sum=0;    
          for(int i=0;i<grid.size();i++){
              for(int j=0;j<grid[0].size();j++){
                  sum+=grid[i][j];
              }
          }
          int n=grid.size();
          int m=grid[0].size();
          long long actualSum=((n*n)*(n*n+1))/2;
  
          long long misNumber=actualSum-(sum-dupl);
  
          return {dupl,(int)misNumber};
  
          
      }


      // Approach 2
      vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        long long n = nums.size();
        long long sum = 0, sum_of_squares = 0;
        long long expected_sum = n * (n + 1) / 2;
        long long expected_sum_of_squares = n * (n + 1) * (2 * n + 1) / 6;

        // Calculate actual sum and sum of squares of the elements in the array
        for (int num : nums) {
            sum += num;
            sum_of_squares += (long long)num * num;
        }

        // Equation 1: y - x = actual_sum - expected_sum
        long long diff = sum - expected_sum;

        // Equation 2: y^2 - x^2 = actual_sum_of_squares - expected_sum_of_squares
        long long square_diff = sum_of_squares - expected_sum_of_squares;

        // (y - x) * (y + x) = square_diff
        // From above, we know that diff = y - x
        // And square_diff = (y - x) * (y + x)
        // So, (y + x) = square_diff / diff

        long long sum_of_xy = square_diff / diff;

        // Now we can solve for y and x:
        long long y = (diff + sum_of_xy) / 2;
        long long x = y - diff;

        return { (int)y, (int)x };
      }

  };
int main(){
  vector<vector<int>> grid = {
    {9, 1, 7},
    {8, 9, 2},
    {3, 4, 6}
};
  Solution sol;
  vector<int>result=sol.findMissingAndRepeatedValues(grid);
  cout<<result[0]<<" "<<result[1];
  return 0;
}