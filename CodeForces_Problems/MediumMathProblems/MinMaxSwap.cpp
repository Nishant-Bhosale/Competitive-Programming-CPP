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

   for(int i = 0; i < n; i++){
      cin>>a[i];
   }
   for(int i = 0; i < n; i++){
      cin>>b[i];
   }

   for(int i = 0; i < n; i++){
      if(b[i] > a[i]){
         swap(b[i], a[i]);
      }
   }

   ll z = *max_element(a.begin(), a.end());
   ll y = *max_element(b.begin(), b.end());

   cout<<(z * y)<<endl;
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