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

      if(n == 1){
         cout<<2<<endl;
         continue;
      }

      if(n == 2){
         cout<<1<<" "<<2<<endl;
         continue;
      }

      vector<ll> res;

      for(ll i = 2 * n; i >= 1; i--){
         if(i % 2 == 0){
            res.emplace_back(i / 2);
            res.emplace_back(i);
         }
      }

      for(ll i = 0; i < n; i++){
         cout<<(res[i])<<" ";
      }

      cout<<endl;
   }

   return 0;
}