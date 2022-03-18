#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;

      ll cnt1 = count(all(s), '1');
      ll cnt2 = count(all(s), '2');
      ll cnt3 = count(all(s), '3');

      if(cnt1 == 0 || cnt2 == 0 || cnt3 == 0){
         cout<<0<<endl;
         continue;
      }

      vector<pair<char, ll>> c;
      
      for(auto x : s){
         if(c.empty() || c.back().first != x){
            c.emplace_back(make_pair(x, 1));
         }else{
            c.back().second++;
         }
      }
      
      ll m = c.size(), ans = INT_MAX;

      for(ll i = 1; i < m - 1; i++){
         if(c[i - 1].first != c[i + 1].first){
            ans = min(ans, 2 + c[i].second);
         }
      }

      cout<<ans<<endl;
      //Brute Force
      // ll minVal = INT_MAX;

      // for(ll i = 0; i < s.size(); i++){
      //    ll cnt = 0, j = i;
      //    bool f1 = false, f2 = false, f3 = false;
      //    while(j < s.size()){
      //       if(s[j] == '1'){
      //          f1 = true;
      //          cnt++;
      //       }
      //       if(s[j] == '2'){
      //          f2 = true;
      //          cnt++;
      //       }
      //       if(s[j] == '3'){
      //          f3 = true;
      //          cnt++;
      //       }
      //       if(f1 && f2 && f3){
      //          minVal = min(minVal, cnt);
      //          cnt = 0;
      //          break;
      //       }
      //       j++;
      //    }
         // if(f1 && f2 && f3){
         //    minVal = min(minVal, cnt);
         //    cnt = 0;
         // }
      // }
      // cout<<minVal<<endl;
   };

   return 0;
}