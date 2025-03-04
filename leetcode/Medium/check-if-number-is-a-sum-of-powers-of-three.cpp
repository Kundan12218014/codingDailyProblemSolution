#include<bits/stdc++.h>
using namespace std;
class Solution{
  public: 
  //approach 1
  // bool checkPowerOfThree(int n){
  //   int p=0;
  //   while(pow(3,p)<=n)p++;
  //   while(n>0){
  //     if(n>=pow(3,p)){
  //       n=n-pow(3,p);
  //     }
  //     if(n>=pow(3,p)){
  //       return false;
  //     }
  //     p--;
  //   }
  //   return true;
  // }
  
  //approach 2
  // bool checkPowerOfThree(int n){
  //   while(n>0){
  //     if(n%3==2){
  //       return false;
  //     }
  //     n/=3;
  //   }
  //   return true;
  // }

  //approach 3
  bool solve(int n,int p){
      if(n==0){
        return true;
      }
      if(pow(3,p)>n){
        return false;
      }
      bool power_le_lo=solve(n-pow(3,p),p+1);
      bool power_nahi_lo=solve(n,p+1);
      return  power_le_lo||power_nahi_lo;
  }
  bool checkPowerOfThree(int n){
      return solve(n,0);
  }
};
int main(){
  int n=12;
  Solution sol;
  if(sol.checkPowerOfThree(n)){
    cout<<n<<" is the power of 3"<<endl;
  }
  else{
    cout<<n<<" is not the power of 3"<<endl;
  }

  return 0;
}