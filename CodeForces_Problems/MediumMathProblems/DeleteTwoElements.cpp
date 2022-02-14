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
      map<ll,ll> mp;
      rep(0, n){
         cin>>arr[i];
         mp[arr[i]]++;
      }

      ll sum = accumulate(arr.begin(), arr.end(), 0LL);

      if((2 * sum) % n != 0){
         cout<<0<<endl;
         continue;
      }

      ll ans = 0;
      ll required = (2 * sum) / n;
      for(ll i = 0; i < n; i++){
         ll el1 = arr[i];
         ll el2 = required - el1;
         if(mp[el2]) ans += mp[el2];
         if(el2 == el1){
            ans--;
         }
      }
      cout<<(ans / 2)<<endl;
   }

   return 0;
}