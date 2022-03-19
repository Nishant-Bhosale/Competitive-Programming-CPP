#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) cin>>arr[i];

      if(count(all(arr), arr[0]) == arr.size()){
         cout<<0<<endl;
         continue;
      }

      ll ans = 0;

      for(ll i = 0; i < n - 1; i++){
         if(arr[i] <= arr[i + 1]){
            continue;
         }else{
            ans += abs(arr[i + 1] - arr[i]);
         }
      }

      cout<<ans<<endl;
   };

   return 0;
}