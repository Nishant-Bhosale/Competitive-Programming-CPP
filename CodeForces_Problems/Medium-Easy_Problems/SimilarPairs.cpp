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

      map<ll, ll> mp;
      set<ll> st;
      // vector<ll> arr(n);
      for(ll i = 0; i < n; i++){
         ll num;
         cin>>num;
         mp[num]++;
         // arr.emplace_back(num)
         st.insert(num);
      }

      ll maxVal = -1;
      for(auto it : mp){
         maxVal = max(maxVal, it.second);
      }

      ll sz = st.size();

      if(sz == maxVal){
         cout<<(sz - 1)<<endl;
         continue;
      }

      ll ans = min(sz, maxVal);
      cout<<ans<<endl;
   }

   return 0;
}