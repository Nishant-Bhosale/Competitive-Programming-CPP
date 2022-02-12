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
      vector<pair<ll,ll>> arr;
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num , 1);
      }

      for(ll i = 0; i < arr.size(); i++){
         if(arr[i].first % x == 0){
            arr.emplace_back(arr[i].first / x, arr[i].second * x);
         }else{
            break;
         }
      }

      ll ans = 0;
      for(ll i = 0; i < arr.size(); i++){
         ans += (arr[i].first) * arr[i].second;
      }

      cout<<ans<<endl;
   }

   return 0;
}