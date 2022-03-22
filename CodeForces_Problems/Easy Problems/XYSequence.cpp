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
      ll n, B, x, y;
      cin>>n>>B>>x>>y;   

      // ll sum = 0;
      vector<ll> arr;
      arr.emplace_back(0);
      for(ll i = 1; i <= n; i++){
         if(arr[i - 1] + x <= B){
            // sum += (arr[i - 1] + x);
            arr.emplace_back(arr[i - 1] + x);
         }else{
            arr.emplace_back(arr[i - 1] - y);
            // sum += (arr[i - 1] - y);
         }
      }

      ll ans = accumulate(all(arr), 0LL);
      cout<<ans<<endl;
      // cout<<sum<<endl;
   };

   return 0;
}