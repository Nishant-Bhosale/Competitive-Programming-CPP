#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n;
   cin>>n;

   vector<ll> arr(n + 1);

   for(ll i = 1; i <= n; i++){
      cin>>arr[i];
   }

   if(arr[1] == 1){
      cout<<(n+1)<<" ";

      for(ll i = 1; i <= n; i++){
         cout<<i<<" ";
      }
      cout<<"\n";
      return;
   }

   for(ll i = 1; i < n; i++){
      if(!arr[i] && arr[i+1]){
         for(ll j = 1; j <= i; j++){
            cout<<j<<" ";
         }
         cout<<(n + 1)<<" ";
         for(ll j = i + 1; j < (n+1); j++){
            cout<<j<<" ";
         }
         cout<<"\n";
         return;
      }
   }

   for(ll i = 1; i < (n + 1); i++){
      cout<<i<<" ";
   }
   cout<<(n + 1)<<" ";
   cout<<"\n";
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }
   return 0;
}