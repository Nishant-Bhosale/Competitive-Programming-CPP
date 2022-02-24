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
      ll n,k;
      cin>>n>>k;

      vector<ll> arr;
      vector<ll> res;
      ll prevNum = 0;
      for(ll i = 0; i < k; i++){
         ll num;
         cin>>num;
         for(ll j = num; j > prevNum; j--){
            res.emplace_back(j);
         }
         prevNum = num;
      }

      for(ll i = 0; i < res.size(); i++){
         cout<<res[i]<<" ";
      }
      cout<<"\n";
   }

   return 0;
}