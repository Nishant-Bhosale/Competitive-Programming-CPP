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
      ll x1, x2, y1, y2;
      cin>>x1>>y1>>x2>>y2;

      vector<vector<ll>> arr(n);

      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < m; j++){
            ll num;
            cin>>num;
            arr[i].emplace_back(num);
         }
      } 
      
      for(ll i = 0; i < n; i++){
         for(ll j = 0; j < m; j++){
            if(arr[i] == x1 && arr[j] == y1){
               continue;
            }
            if(arr[i] == x2 && arr[j] == y2){
               continue;
            }
         }
      }
   }

   return 0;
}