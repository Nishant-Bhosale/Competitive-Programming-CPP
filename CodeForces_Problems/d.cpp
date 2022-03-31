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
      ll n, k, sum = 0;
      cin>>n>>k;
      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) {
         cin>>arr[i];
         sum += arr[i];
      };

      sort(all(arr), greater<int>());

      if(n == 1){
         cout<<arr[0]<<endl;
         continue;
      }

      if(k == 0){
         cout<<sum<<endl;
         continue;
      }
      ll ans = 0;
      ll t = k;
      
      for(ll i = 0; i < k; i++){
         ans += (arr[t] / arr[i]);
         t++;
      }

      for(ll m = 2 * k; m < arr.size(); m++){
        ans += arr[m]; 
      }
   
      cout<<ans<<endl;
   };

   return 0;
}