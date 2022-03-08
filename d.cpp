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
      ll n, x;
      cin>>n>>x;

      vector<ll> arr(n);

      map<ll,ll> mp;
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
         mp[arr[i]]++;
      }

      sort(arr.begin(), arr.end());

      ll ans = 0;
      for(ll i = 0; i < n; i++){
         if(mp[arr[i]] == 0){
            continue;
         }

         if(mp[arr[i]] != 0){
            if(mp[arr[i] * x]){
               mp[arr[i]]--;
               mp[arr[i] * x]--;
            }else{
               mp[arr[i]]--;
               ans++;
            }
         }
      }

      cout<<ans<<endl;
   }

   return 0;
}