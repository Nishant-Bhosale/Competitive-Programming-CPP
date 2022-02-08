#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
typedef long long ll;

ll n, k;
ll N = 1e5 + 7;
vector<ll> a(N);
vector<ll> b(N);

bool check(ll numCookies){
   ll res = 0;
   for(ll i = 0; i < n; i++){
      if(numCookies * a[i] - b[i] > 0){
         res += numCookies*a[i] - b[i];
         if(res > k){
            return false;
         }
      }
   }
   return true;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   cin>>n>>k;

   for(ll i = 0; i < n; i++){
      cin>>a[i];
   }
   for(ll i = 0; i < n; i++){
      cin>>b[i];
   }

   ll cur = 0, left = 0, right = 2e9 + 1, ans = 0;

   while(right - left > 1){
      ll mid = left + (right - left) / 2;

      if(check(mid)){
         ans = mid;
         left = mid;
      }else{
         right = mid;
      }
   }

   cout<<ans<<endl;

   return 0;
}