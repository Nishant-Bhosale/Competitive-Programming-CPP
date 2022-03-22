#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;

      ll cntE = 0, cntO = 0;
      vector<ll> arr(n + 1), e, o;
      for(ll i = 1;i<=n;i++) {
         cin>>arr[i];
         if(arr[i] % 2 == 0){
            e.emplace_back(arr[i]);
            cntE++;
         }else{
            o.emplace_back(arr[i]);
            cntO++;
         }
      }

      if(cntO <= 1){
         cout<<-1<<endl;
         continue;
      }

      if(cntO % 2 == 0){
         for(ll i = 0; i < o.size(); i++){
            cout<<o[i]<<" ";
         }
         for(ll i = 0; i < e.size(); i++){
            cout<<e[i]<<" ";
         }
         cout<<endl;
         continue;
      }

      if(cntO % 2 != 0){
         if(cntE == 0){
            cout<<-1<<endl;
         }else{
            for(ll i = 0; i < o.size() - 1; i++){
               cout<<o[i]<<" ";
            }
            for(ll i = 0; i < e.size(); i++){
               cout<<e[i]<<" ";
            }
            cout<<(o[o.size() - 1])<<" ";
            cout<<endl;
         }
      }
   };

   return 0;
}