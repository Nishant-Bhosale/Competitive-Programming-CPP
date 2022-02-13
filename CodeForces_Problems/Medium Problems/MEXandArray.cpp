#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n;
   cin>>n;

   vector<ll> arr(n + 1);

   for(ll i = 1; i <= n; i++){
      cin>>arr[i];
   }

   ll ans = (n * (n+1)*(n+2))/6;

   for(ll i = 1; i <= n; i++){
      if(arr[i] == 0){
         ans += (i) * (n - i + 1);
      }
   }

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