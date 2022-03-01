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
      ll n, h; 
      cin>>n>>h;

      vector<ll> arr(n);
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      ll l = 0, r = 1e18;

      while(l <= r){
         ll mid = l + (r - l) / 2;
         ll sum = mid;

         for(ll i = 0; i < n - 1; i++){
            sum += min(mid, arr[i + 1] - arr[i]);
         }

         if(sum < h){
            l = mid + 1;
         }else{
            r = mid - 1;
         }
      }

      cout<<(r + 1)<<endl;
   }

   return 0;
}