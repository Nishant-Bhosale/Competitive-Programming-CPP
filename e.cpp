#include<iostream>
using namespace std;

const int minVal = 100;
const string subseq[] = {"00", "25", "50", "75"};

int solve(string& s, string& t){
   int sLen = s.length() - 1;
   int ans = 0;

   while(sLen >= 0 && s[sLen] != t[1]){
      sLen--;
      ans++;
   }

   if(sLen < 0){
      return minVal;
   }

   sLen--;

   while(sLen >= 0 && s[sLen] != t[0]){
      sLen--;
      ans++;
   }

   return sLen < 0 ? minVal : ans;
}

int main(){
   int t;
   cin>>t;

   while(t--){
      string n;
      cin>>n;

      int ans = minVal;

      for(auto v: subseq){
         ans = min(ans, solve(n, v));
      }

      cout<<ans<<endl;
   }
   return 0;
}