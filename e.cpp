#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n, x, y;
   cin>>n>>x>>y;

   vector<ll> arr;
   for(ll i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
   }

   bool flag = false;
   for(ll i = 0; i < n; i++){
      if(arr[i] < y){
         flag = true;
         break;
      }
   }

   if(flag){
      cout<<"Alice"<<endl;
   }else{
      ll ans = 0;
      ll diff = y - x;
      ll val = 3;
      sort(arr.begin(), arr.end());

      for(ll i = 0; i < n; i++){
         val += arr[i];
         if(val > diff){
            val = val ^ 3;
         }
      }

      cout<<val<<endl;
   }
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