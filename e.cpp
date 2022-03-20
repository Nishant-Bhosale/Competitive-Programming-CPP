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

      vector<ll> temp(n + 1, INT_MIN);

      temp[0] = 0;
      for(ll i = 0; i < n; i++){
         ll val = 0;
         for(ll j = i; j < n; j++){
            val += arr[j];
            temp[j - i + 1] = max(temp[j - i + 1], val);
         }
      }

      ll ans = *max_element(all(temp));

      cout<<ans<<endl;
   };

   return 0;
}