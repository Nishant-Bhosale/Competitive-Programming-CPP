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

      vector<ll> res;

      for(ll i = 1; i <= n; i++){
         res.emplace_back(i);
      }

      reverse(res.begin(),res.end());
      for(ll i = 0; i < res.size(); i++){
         cout<<res[i]<<" ";
      }
      cout<<endl;
      for(ll i = 0; i < res.size(); i++){
         swap(res[n - 1 - i], res[n - 2 - i]);
         if(i != res.size() - 1){
            for(ll i = 0; i < res.size(); i++){
               cout<<res[i]<<" ";
            }
            cout<<endl;
         }
      }
   }

   return 0;
}