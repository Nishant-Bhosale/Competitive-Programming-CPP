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

   vector<ll> a(n);
   vector<ll> b(n);

   for(ll i = 0; i < n; i++){
      cin>>a[i];
   }
   for(ll i = 0; i < n; i++){
      cin>>b[i];
   }

   vector<int> good(2, 0);
   for(ll i = 0; i < n; i++){
      if(a[i] > b[i] && !good[0]){
         cout<<"NO\n";
         return;
      }
      if(a[i] < b[i] && !good[1]){
         cout<<"NO\n";
         return;
      }

      if(a[i] == -1) good[0] = 1;
      if(a[i] == 1) good[1] = 1;
   }

   cout<<"YES\n";
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