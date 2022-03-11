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
      ll n, m;
      cin>>n>>m;

      vector<ll> arr(n);
      // vector<ll> pos(m);
      set<ll> st;
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }
      for(ll i = 0; i < m; i++){
         ll num;
         cin>>num;
         // pos.emplace_back(num);
         st.insert(num);
      }

      if(is_sorted(arr.begin(), arr.end())){
         cout<<"YES"<<endl;
         continue;
      }
      
      while(true){
         bool flag = false;
         for(ll i = 0; i < n; i++){
            if(arr[i] > arr[i + 1]){
               if(st.count(i + 1)){
                  flag = true;
                  swap(arr[i], arr[i + 1]);
               }
            }
         }
         if(!flag) break;
      }

      bool flag = true;

      for(ll i = 0; i < n - 1; i++){
         flag &= arr[i] <= arr[i + 1];
      }

      if(flag){
         cout<<"YES"<<endl;
      }else{
         cout<<"NO"<<endl;
      }
   }

   return 0;
}