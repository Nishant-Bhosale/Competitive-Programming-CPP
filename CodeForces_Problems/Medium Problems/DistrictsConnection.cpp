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
      cin>>n;

      vector<ll> arr(n + 1);

      for(ll i = 1; i <= n; i++){
         cin>>arr[i];
      }

      if(count(arr.begin(), arr.end(), arr[1]) == n){
         cout<<"NO"<<endl;
         continue;
      }

      cout<<"YES"<<endl;

      vector<pair<ll, ll>> res;

      for(ll i = 1; i <= n; i++){
         if(arr[i] != arr[1]){
            res.emplace_back(make_pair(1, i));
         }
      }

      if(res.size() == (n - 1)){
         for(ll i = 0; i < res.size(); i++){
            cout<<res[i].first<<" "<<res[i].second<<endl;
         }
         continue;
      }
      ll idx = 1;
      for(ll i = 1; i <= n; i++){
         if(arr[i] != arr[1]){
            idx = i;
            break;
         }
      }

      for(ll i = 2; i <= n; i++){
         if(arr[i] == arr[1]){
            res.emplace_back(make_pair(idx, i));
         }
      }

      for(ll i = 0; i < res.size(); i++){
         cout<<res[i].first<<" "<<res[i].second<<endl;
      }
   }

   return 0;
}