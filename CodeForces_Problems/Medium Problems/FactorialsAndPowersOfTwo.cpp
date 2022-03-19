#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

const long long MAXAI = 1000000000000ll;

int getFirstBit(ll n){
   return 63 - __builtin_clzll(n);
}

int getBitCount(ll n){
   return __builtin_popcountll(n);
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;

      vector<ll> fact;
      ll factorial = 6, num = 4;
      while(factorial <= MAXAI){
         fact.emplace_back(factorial);
         factorial *= num;
         num++;
      }

      vector<pair<ll, ll>> fact_sum(1 << fact.size());

      fact_sum[0] = {0, 0};

      for(ll i = 1; i < (1 << fact.size()); i++){
         auto first_bit = getFirstBit(i);
         fact_sum[i].first = fact_sum[i ^ (1 << first_bit)].first + fact[first_bit];
         fact_sum[i].second = getBitCount(i);
      }

      ll ans = getBitCount(n);

      for(auto it : fact_sum){
         if(it.first <= n){
            ans = min(ans, it.second + getBitCount(n - it.first));
         }
      }

      cout<<ans<<endl;
   };

   return 0;
}