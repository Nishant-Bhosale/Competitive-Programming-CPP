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

      vector<ll> arr(n+1), pos(n+1);
      set<ll> st;

      ll largest = 0;
      for(ll i = 1; i <= n; i++){
         cin>>arr[i];
         largest = max(largest, arr[i]);
         auto it = st.lower_bound(arr[i]);

         vector<ll> toRemove;

         for(; it != st.end(); it++){
            ll val = *it;
            toRemove.emplace_back(val);
         }

         for(auto it : toRemove){
            st.erase(it);
         }

         st.insert(largest);
      }
      
      cout<<(int)st.size()<<endl;
   }

   return 0;
}