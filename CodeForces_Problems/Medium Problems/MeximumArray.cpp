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

      vector<ll> arr(n + 1);
      vector<vector<ll>> pos(n+2);// array to store the all the positions of an element in a given array
      //e.g [1, 3, 4, 1] pos = [[], [1, 4] , [], [2], [3]]
      for(ll i = 1; i <= n; i++){
         cin>>arr[i];
         pos[arr[i]].emplace_back(i);
         //pos[1].emplace_back(1);
      }

      ll l = 1;
      vector<ll> res;

      while(l <= n){
         ll mex = 0;
         ll r = l;

         for(; mex <= n + 1; mex++){
            auto it = lower_bound(pos[mex].begin(), pos[mex].end(), l);
            if(it == pos[mex].end()){
               break;
            }
            r = max(r, *it); // gets the maximum value of r
         }

         res.emplace_back(mex);
         l = r + 1;
      }    

      cout<<(int)res.size()<<endl;

      for(auto it : res){
         cout<<it<<" ";
      }
      cout<<endl;
   }

   return 0;
}