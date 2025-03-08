#include<bits/stdc++.h>
using namespace std;
class Solution{
  public: 
    int blocksColor(string blocks,int k){
      int n=blocks.size();
      int i=0,j=0;
      int operations=k;
      int W=0;
      while(j<n){
        if(blocks[j]=='W'){
          W++;
        }
        if(j-i+1==k){
          operations=min(operations,W);
          if(blocks[i]=='W'){
            W--;
          }
          i++;
        }
        j++;
      }
      return operations;
    }
};
int main(){
  int k=7;
  string block="WBBWWBBWBW";
  Solution sol;
  int result=sol.blocksColor(block,k);
  cout<<result;
  return 0;
}