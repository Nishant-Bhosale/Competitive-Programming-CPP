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

      // ll gcd1 = 1;
      // for(ll i = 0; i < n; i++){
      //    arr.emplace_back(i + 1);
      //    gcd1 = __gcd(gcd1, (i + 1)* (i + 1));
      // }

      // ll ans = 0;
      // if(gcd1 > 1){
      //    ans++;
      // }

      // vector<ll> temp = arr;

      // while(next_permutation(all(temp))){
      //    ll gcd2 = 1;
      //    for(ll i = 0; i < n; i++){
      //       gcd2 = __gcd(gcd2, arr[i] * (i + 1));
      //    }

      //    if(gcd2 > 1){
      //       ans++;
      //    }
      // }

      if(n % 2 == 1){
         cout<<0<<endl;
         continue;
      }      

      ll ans = 1;
      for(ll i = 1; i <= n / 2; i++){
         ans *= 1LL * i * i % 998244353;
         ans %= 998244353;
      }
      
      cout<<ans<<endl;
   };

   return 0;
}