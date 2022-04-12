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
      ll n, m;
      cin>>n>>m;

      vector<ll> arr(n);
      vector<ll> price(m);

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }
      for(ll i = 0; i < m; i++){
         cin>>price[i];
      }

      sort(all(arr), greater<int>());

      vector<bool> isSold(m, false);
      ll ans = 0, pos = 0;

      for(ll i = 0; i < n; i++){
         if(!isSold[pos]){
            if(price[pos] <= price[arr[i] - 1]){
               ans += price[pos];
               isSold[pos] = true;
            }else{
               ans += price[arr[i] - 1];
            }
         }else{
            ans += price[arr[i] - 1];
         }
         pos++;
         if(pos >= m){
            pos = 0;
         }
      }
      // for(ll i = (n/2) + 1; i < n; i++){
      //    if(!isSold[pos]){
      //       if(price[pos] <= price[arr[i]]){
      //          ans += price[pos];
      //          isSold[pos] = true;
      //       }else{
      //          ans += price[arr[i]];
      //       }
      //    }else{
      //       ans += price[arr[i]];
      //    }
      //    pos++;
      //    if(pos >= m){
      //       pos = 0;
      //    }
      // }

      cout<<ans<<endl;
   };

   return 0;
}