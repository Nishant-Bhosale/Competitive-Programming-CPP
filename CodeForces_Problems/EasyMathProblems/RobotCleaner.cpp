#include<bits/stdc++.h>
using namespace std;

#define vi vector<ll>
#define vii vector<ll,ll>
#define rep(a,b) for(ll i = a;i<b;i++)
#define pi pair<ll,ll>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n, m, xr, yr, xd, yd;
      cin>>n>>m>>xr>>yr>>xd>>yd;

      ll dr = 1, dh = 1, ans = 0;

      while(true){
         if(xr == xd || yr == yd) break;

         if(dr == 1 && xr == n) dr = -1;
         if(dr == -1 && xr == 1) dr = 1;
         if(dh == 1 && yr == m) dh = -1;
         if(dh == -1 && yr == 1) dh = 1;

         xr += dr;
         yr += dh;
         ans++;
      }

      cout<<ans<<endl;
   }

   return 0;
}