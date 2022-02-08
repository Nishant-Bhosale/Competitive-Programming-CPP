#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n, k;
   cin>>n>>k;

   vector<ll> a(n);
   vector<ll> b(n);

   for(ll i = 0; i < n; i++){
      cin>>a[i];
   }
   for(ll i = 0; i < n; i++){
      cin>>b[i];
   }

   while(k){
      ll div = INT_MAX;
      for(ll i = 0; i < n; i++){
         div = min(div, b[i] / a[i]);
      }

      ll rem = INT_MAX;
      for(ll i = 0; i < n; i++){
         if(b[i] / a[i] == div){
            rem = min(rem, b[i] % a[i]);
         }
      }

      ll idx = 0;
      for(ll i = 0; i < n; i++){
         if(b[i]/a[i] == div && b[i] % a[i] == rem){
            idx = i;
            break;
         }
      }

      if(k >= a[idx] - rem){
         k -= a[idx] - rem;
         b[idx] += a[idx] - rem;
      }else{
         k = 0;
      }
   }

   ll minVal = INT_MAX;
   for(ll i = 0; i < n; i++){
      minVal = min(minVal, b[i] / a[i]);
   }
   cout<<minVal<<endl;
   return 0;
}