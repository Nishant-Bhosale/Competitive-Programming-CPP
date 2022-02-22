#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n;
      char c;
      string s;
      cin>>n>>c>>s;

      vector<ll> res;
      if(count(s.begin(), s.end(), c) == s.size()){
         cout<<0<<endl;
         continue;
      }

      bool flag = true;
      for(ll i = 0; i < n; i++){
         if(s[i] != c){
            flag = false;
            break;
         }
      }

      if(!flag){
         for(ll i = 1; i <= n; i++){
            flag = true;
            for(ll j = i; j <= n; j++){
               flag &= (s[j - 1] == c);
               j += (i - 1);
            }

            if(flag){
               res.emplace_back(i);
               break;
            }
         }

         if(!flag){
            res.emplace_back(n);
            res.emplace_back(n - 1);
         }
      }

      cout<<res.size()<<endl;
      for(ll i = 0; i < res.size(); i++){
         cout<<res[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}