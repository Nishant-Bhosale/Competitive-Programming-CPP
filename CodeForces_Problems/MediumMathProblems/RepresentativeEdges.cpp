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

      vector<ll> arr(n);

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      if(n == 1 || n == 2){
         cout<<0<<endl;
         continue;
      }

      ll diff = abs(arr[0]-arr[1]);
      bool flag = true;
      for(ll i = 2; i < n - 1; i++){
         if(!(abs(arr[i] - arr[i+1]) == diff)){
            flag = false;
         }
      }

      if(flag){
         cout<<0<<endl;
         continue;
      }

      ll ans = max(0LL, n - 2);
      for(ll l = 0; l < n; l++){
         for(ll r = l + 1; r < n; r++){
            ll s = 0;
            for(ll i = 0; i < n; i++){
               if(arr[i] * (r - l) == arr[l] * (r - l) + (i - l) * (arr[r] - arr[l])){
                  s++;
               }
            }
            ans = min(n - s, ans);
         }
      }

      cout<<ans<<endl;
   }

   return 0;
}