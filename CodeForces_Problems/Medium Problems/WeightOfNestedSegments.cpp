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

      vector<pair<pair<ll,ll>,ll>> arr;

      for(ll i = 0; i < m; i++){
         ll a, b;
         cin>>a>>b;
         arr.emplace_back(make_pair(make_pair(b,a), i + 1));
      }

      sort(arr.begin(), arr.end());

      vector<pair<ll,ll>> coors;
      ll sum = 0;
      for(ll i = 0; i < 2*n; i++){
         sum += arr[i].first.first;
         coors.emplace_back(arr[i].first.second, arr[i].second);
      }

      sort(coors.begin(), coors.end());
      cout<<sum<<endl;
      for(ll i = 0; i < n; i++){
         cout<<coors[i].second<<" "<<coors[2*n - i - 1].second<<endl;
      }
   }

   return 0;
}
