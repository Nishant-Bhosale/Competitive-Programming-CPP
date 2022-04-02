#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;
int dp[200005];

ll solve(string &s, ll i){
   if(i >= s.size()) return 0;
   if(dp[i] != -1) return dp[i];
   if(i == s.size() - 1) return 1;

   if(i < s.size() - 1 && s[i] == s[i + 1]){
      return solve(s, i + 2);
   }else{
      ll j;
      for(j = i + 1; j < s.size(); j++){
         if(s[j] == s[i]) break;
      }
      if(j == s.size()){
         return 1 + solve(s, i + 1);
      }else{
         ll c1 = j - i - 1 + solve(s, j + 1);
         ll c2 = 1 + solve(s, i + 1);
         return dp[i] = min(c1, c2);
      }
   }
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;

      if(s.size() == 0){
         cout<<0<<endl;
         continue;
      }

      for(ll i = 0; i < s.size(); i++){
         dp[i] = -1;
      }
      ll toDel = solve(s, 0);
      cout<<toDel<<endl;
   };

   return 0;
}