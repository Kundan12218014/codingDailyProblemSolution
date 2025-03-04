#include<bits/stdc++.h>
using namespace std;
class Solution{
  public: 
  bool checkPowerOfThree(int n){
    int p=0;
    while(pow(3,p)<=n)p++;
    while(n>0){
      if(n>=pow(3,p)){
        n=n-pow(3,p);
      }
      if(n>=pow(3,p)){
        return false;
      }
      p--;
    }
    return true;
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