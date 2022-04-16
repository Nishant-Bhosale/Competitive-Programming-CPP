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
      ll n;
      cin>>n;

      vector<pair<ll,ll>> res;

      for(ll i = 1; i <= n; i++){
         ll k, x = 0;
         cin>>k;
         for(ll j = 0; j < k; j++){
            ll num;
            cin>>num;
            x = max(x, num - j + 1);
         }
         res.emplace_back(make_pair(x, k));
      }

      sort(all(res));

      ll ans = 0;
      ll sum = 0;
      for(ll i = 0; i < res.size(); i++){
         ans = max(ans, res[i].first - sum);
         sum += res[i].second;
      }

      cout<<ans<<endl;
   };

   return 0;
}