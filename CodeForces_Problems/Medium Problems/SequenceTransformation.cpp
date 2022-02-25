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
      vector<ll> arr;
      set<ll> st;

      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
         st.insert(num);
      }

      if(st.size() == 1){
         cout<<"0"<<endl;
         continue;
      }

      if(st.size() == n){
         cout<<1<<endl;
         continue;
      }

      vector<ll> res(n + 1, 1);

      n = unique(arr.begin(), arr.end()) - arr.begin();

      arr.resize(n);

      for(ll i = 0; i < n; i++){
         res[arr[i]]++;
      }

      res[arr[0]]--;
      res[arr[n - 1]]--;

      ll ans = INT_MAX;
      for(ll i = 0; i < n; i++){
         ans = min(ans, res[arr[i]]);
      }

      cout<<ans<<endl;
   }

   return 0;
}