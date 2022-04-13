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
      string s, t;
      cin>>s>>t;

      if(s == t){
         cout<<"YES"<<endl;
         continue;
      }
      string temp = s;
      reverse(all(temp));
      if(temp == t){
         cout<<"YES"<<endl;
         continue;
      }

      if(t.size() == 1 && count(all(s), t[0]) >= 1){
         cout<<"YES"<<endl;
         continue;
      }
      vector<ll> pos;

      for(ll i = 0; i < s.size(); i++){
         if(t[0] == s[i]){
            pos.emplace_back(i);
         }
      }

      if(pos.size() == 0){
         cout<<"NO"<<endl;
         continue;
      }

      bool flag = false;
      
      ll ind = 1;
      // for(ll i = 0; i < pos.size(); i++){
      //    string ans = "";
      //    ans += t[0];
      //    ll temp = pos[i];
      //    if(temp == s.size() - 1){
      //       flag = false;
      //       continue;
      //    }
      //    while(ans != t){
      //       if(s[temp + 1] == t[ind] && (temp) != s.size() - 1 && ind < t.size()){
      //          ans += t[ind];
      //          temp++;
      //          ind++;
      //       }else if(s[temp - 1] == t[ind] && (temp) != 0 && ind < t.size()){
      //          ans += t[ind];
      //          temp--;
      //          ind++;
      //       }else{
      //          flag = false;
      //          break;
      //       }
      //    }
      //    if(ans == t){
      //       flag = true;
      //       break;
      //    }
      // }

      for(ll i = 0; i < s.size(); i++){
         string cur;
         cur.push_back(s[i]);
         for(ll j = i; j < s.size(); j++){
            if(i != j){
               cur.push_back(s[j]);
            }
            string temp = cur;

            for(ll k = j; k >= 0; k--){
               if(k != j){
                  temp.push_back(s[k]);
               }
               if(temp == t){
                  flag = true;
               }
            }
         }
      }

      if(flag){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   };

   return 0;
}