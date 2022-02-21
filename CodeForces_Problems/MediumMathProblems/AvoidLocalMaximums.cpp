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

      if(n == 2){
         cout<<0<<endl;
         cout<<arr[0]<<" "<<arr[1]<<endl;
         continue;
      }
      ll ans = 0;

      for(ll i = 0; i < n; i++){
         if(i == 0 || i == n - 1){
            continue;
         }

         if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && i <= n - 2){
            // if(!((i - 1) == 0 || (i + 1) == (n - 1))){
            //    ans++;
            //    ll maxval = max({arr[i - 1], arr[i + 1], arr[i]});
            //    ll minVal = min({arr[i - 1], arr[i + 1], arr[i]});
            //    ll idx;
            //    for(ll j = (i - 1); j < i+1; j++){
            //       if(minVal == arr[j]){
            //          idx = j;
            //          break;
            //       }
            //    }

            //    arr[idx] = maxval;
            // }

            ans++;
            if(i + 2 < n){
               arr[i + 1] =  max(arr[i], arr[i + 2]);
            }else{
               arr[i + 1] = arr[i];
            }
         }
      }

      cout<<ans<<endl;
      for(ll i = 0; i < n; i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
   }

   return 0;
}