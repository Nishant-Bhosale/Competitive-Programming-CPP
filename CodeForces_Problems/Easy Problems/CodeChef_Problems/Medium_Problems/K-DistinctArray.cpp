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
      ll n, k;
      cin>>n>>k;

      if(n == k){
         for(ll i = 0; i < n; i++){
            cout<<(n)<<" ";
         }
         cout<<"\n";
         continue;
      }

      if(k == (n*(n + 1) / 2)){
         for(ll i = 1; i <= n; i++){
            cout<<i<<" ";
         }
         cout<<"\n";
         continue;
      }

      k -= n;

      vector<ll> arr;
      ll cnt = 0;
      while(k >= cnt){
         arr.emplace_back(cnt + 1);
         k -= cnt;
         cnt += 1;
      }

      while(arr.size() < n){
         arr.emplace_back(cnt - k);
      }

      for(ll i = 0; i < arr.size(); i++){
         cout<<arr[i]<<" ";
      }
      cout<<"\n";
   }

   return 0;
}