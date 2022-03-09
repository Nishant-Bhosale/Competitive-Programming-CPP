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
      ll n, m;
      cin>>n>>m;

      vector<pair<ll,ll>> arr;

      for(ll i = 0; i < m; i++){
         ll a, b;
         cin>>a>>b;
         arr.emplace_back(make_pair(b,a));
      }

      sort(arr.begin(), arr.end());

      ll sum = 0;
      for(ll i = 0; i < (n + 1); i++){ 
         sum += arr[i].second;
      }
      cout<<sum<<endl;
      for(ll i = 0; i < (n + 1); i++){ 
         cout<<arr[i].second<<" "<<arr[i].first<<endl;
      }
   }

   return 0;
}