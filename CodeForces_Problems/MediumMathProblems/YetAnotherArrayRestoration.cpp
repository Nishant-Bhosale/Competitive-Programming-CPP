#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool check(ll a, ll d, ll x, ll y, ll n){
   if(x < a || y < a) return false;
   if((x - a) % d != 0) return false;
   if((y - a) % d != 0) return false;

   ll k = (y - a) / d;
   k++;
   if(k > n) return false;
   return true;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n, x, y;
      cin>>n>>x>>y;

      if(n == 2){
         cout<<x<<" "<<y<<endl;
         continue;
      }

      ll a, d, mx = INT64_MAX;
      for(ll i = 1; i < 51; i++){
         for(ll j = 1; j < 51; j++){
            if(check(i, j, x, y, n)){
               ll temp = i + (n - 1)*j;
               if(temp < mx){
                  mx = temp;
                  a = i;
                  d = j;
               }
            }
         }
      }

      ll current = a;
      for(ll i = 0; i < n; i++){
         cout<<current<<" ";
         current += d;
      }
      cout<<endl;
   }

   return 0;
}