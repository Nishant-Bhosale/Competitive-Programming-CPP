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

      vector<ll> arr(m);
      for(ll i = 0; i < m; i++){
         cin>>arr[i];
      }
      
      ll maxVal = *max_element(arr.begin(), arr.end());
      ll minVal = *min_element(arr.begin(), arr.end());

      for(ll i = 0; i < n; i++){
         cout<<(max(abs(i - maxVal), abs(i - minVal)))<<" ";
      }

      //Brute Force
      // for(ll i = 0; i < m; i++){
      //    ll val = 0;
      //    for(ll j = arr[i]; j >= 0; j--){
      //       res[j] = max(val, res[j]);
      //       val++;
      //    }  
      // }

      // for(ll i = 0; i < m; i++){
      //    ll val = 0;
      //    for(ll j = arr[i]; j < n; j++){
      //       res[j] = max(val, res[j]);
      //       val++;
      //    }  
      // }

      // for(ll i = 0; i < res.size(); i++){
      //    cout<<res[i]<<" ";
      // }
      cout<<endl;
   }

   return 0;
}