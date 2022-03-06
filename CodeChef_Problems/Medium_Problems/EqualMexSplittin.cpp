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

      if(count(arr.begin(), arr.end(), 0) == 0){
         cout<<n<<endl;
         continue;
      }

      map<ll, ll> mp;

      for(ll i = 0; i < n; i++){
         if(arr[i] == 0){
            mp[1]++;
            continue;
         }
         if(arr[i] != 0){
            mp[0]++;
         }
      }

      ll ans = max(mp[0], mp[1]);
      cout<<ans<<endl;
   }

   return 0;
}