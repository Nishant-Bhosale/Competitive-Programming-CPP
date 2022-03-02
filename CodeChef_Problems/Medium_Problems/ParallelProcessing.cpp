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

      vector<ll> pre(n);
      pre[0] = 0;
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
         pre[i] = (i > 0 ? pre[i - 1] + arr[i] : arr[i]);
      }

      if(n == 1){
         cout<<arr[0]<<endl;
      }
      
      ll ans = pre[n - 1];
      for(ll i = 0; i < n; i++){
         ll rem_sum = pre[n - 1] - pre[i];
         rem_sum = max(0LL, rem_sum - pre[i]);
         ans = min(ans, pre[i] + rem_sum);
      }

      cout<<ans<<endl;
   }

   return 0;
}