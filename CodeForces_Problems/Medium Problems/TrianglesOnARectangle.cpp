#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      ll w, h;
      cin>>w>>h;

      vector<ll> ans;
      for(ll i = 0; i < 4; i++){
         int a;
         cin>>a;

         vector<ll> arr;
         for(ll i = 0; i < a; i++){
            ll n;
            cin>>n;
            arr.emplace_back(n);
         }

         ans.emplace_back(arr[a - 1] - arr[0]);
      }

      ll b = max({
         ans[0] * h,
         ans[1] * h,
         ans[2] * w,
         ans[3] * w
      });

      cout<<b<<endl;
   }

   return 0;
}