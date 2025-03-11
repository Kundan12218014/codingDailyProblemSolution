#include<bits/stdc++.h>
using namespace std;
class Solution{
  public: 
    int numberOfSubstring(string s){
      int n=s.size();
      int result=0;
      vector<int>mp(3,0);//This represent 0->a,1->b,2->c
      int i=0,j=0;
      while(j<n){
        char ch =s[j];
        mp[ch-'a']++;
        while(mp[0]>0&&mp[1]>0&&mp[2]>0){
          result+=n-j;
          mp[s[i]-'a']--;
          i++;
        }
        j++;
      }
      return result;
    }
};
int main(){
  string s="abcabc";
  Solution sol;
  int result=sol.numberOfSubstring(s);
  cout<<result;
  return 0;
}