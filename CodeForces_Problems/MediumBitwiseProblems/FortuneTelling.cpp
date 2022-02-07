#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll n, x, y, sum = 0;
   cin>>n>>x>>y;

   vector<ll> arr;
   for(ll i = 0; i < n; i++){
      ll num;
      cin>>num;
      arr.emplace_back(num);
      sum += num;
   }

   ll val = y % 2;

   if((x + (sum)) % 2 == val){
      cout<<"Alice"<<endl;
   }else{
      cout<<"Bob"<<endl;
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