#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    int maxSubarraySumCircular(vector<int>nums){
      int n=nums.size();
      int maxSum=INT_MIN,minSum=INT_MAX;
      int currentMaxSum=0,currentMinSum=0,TotalSum=0;

      for(int i=0;i<n;i++){
        int num=nums[i];
        TotalSum+=num;

        currentMaxSum=max(num,currentMaxSum+num);
        maxSum=max(maxSum,currentMaxSum);
        
        currentMinSum=min(num,currentMinSum+num);
        minSum=min(minSum,currentMinSum);
      }
      if(maxSum<0)return maxSum;
      int wrapSum=TotalSum-minSum;
      return max(wrapSum,maxSum);
    }
};
int main(){
  Solution sol;
  vector<int>nums1={5,-3,5};
  cout<<" Maximum sum Circular subarrary : "<<sol.maxSubarraySumCircular(nums1)<<endl;
  //Expected Output is 10 (wrap-around subarray) i.e. [5]+[5]
  vector<int>nums2={-1,-1,-1};
  cout<<" Maximum sum Circular subarrary : "<<sol.maxSubarraySumCircular(nums2)<<endl;
  return 0;
}