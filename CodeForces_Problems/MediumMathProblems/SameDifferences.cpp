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

      vector<ll> arr(n);
      vector<ll> dup;
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
         dup.emplace_back(arr[i]);
      }

      ll cnt = 0;
      map<ll, ll> mp;
      for(ll i = 0; i < dup.size(); i++){
         dup[i] -= i;
         cnt += mp[dup[i]];
         mp[dup[i]]++;
      }

      //Brute force
      // for(ll i = 0; i < n; i++){
      //    for(ll j = i + 1; j < n; j++){
      //       if((j - i) == arr[j] - arr[i]){
      //          cnt++;
      //       }
      //    }
      // }

      cout<<cnt<<endl;
   }

   return 0;
}