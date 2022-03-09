#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

ll eq(ll x, ll a){
   ll res = (x / a) + (x % a);
   return res;
}

void solve(){
   ll l, r, a;
   cin>>l>>r>>a;
   ll ans = -1;
   ll ans1 = eq(l, a);
   ll ans2 = eq(r, a);

   ans = max(ans1, ans2);
   
   ll e1 = l / a;
   ll q1 = l % a;
   ll e2 = r / a;
   ll q2 = r % a;
   
   if(e1 == e2){
       cout<<(e2 + q2)<<endl;
       return;
   }
   ans = max(ans, e2 + q2);
   ans = max(ans, e2 + a - 2);

//   while(l <= r){ 
//       ll mid = l + (r - l) / 2;
//       ll anRes = eq(mid, a);
//       if(anRes >= ans){
//          ans = max(ans, anRes);
//          l = mid + 1;
//       }else{
//          r = mid - 1;
//       }
//   }

   // for(ll i = l; i <= r; i++){
   //    ll res = eq(i, a);
   //    ans = max(ans, res);
   // }

   cout<<ans<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}