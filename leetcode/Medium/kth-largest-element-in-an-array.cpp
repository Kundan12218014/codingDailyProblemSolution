#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findKthLargest(vector<int> &nums, int k)
  {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (auto it : nums)
    {
      minHeap.push(it);
      if (minHeap.size() > k)
      {
        minHeap.pop();
      }
    }
    return minHeap.top();
  }
};
int main(){
  Solution sol;
  vector<int>nums={3,2,1,5,6,4};
  int k=2;
  int result=sol.findKthLargest(nums,k);
  cout<<result<<endl;
  return 0;
}