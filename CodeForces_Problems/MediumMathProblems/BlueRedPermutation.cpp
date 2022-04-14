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
      vector<ll> arr(n);
      for(ll i = 0;i<n;i++) cin>>arr[i];

      string s;
      cin>>s;

      vector<ll> blues;           
      vector<ll> reds;           

      for(ll i = 0; i < n; i++){
         if(s[i] == 'B'){
            blues.emplace_back(arr[i]);
         }else{
            reds.emplace_back(arr[i]);
         }
      }
      if(blues.size()){
         sort(all(blues));
      }
      if(reds.size()){
         sort(all(reds), greater<int>());
      }

      bool flag = true;

      ll b = blues.size();
      ll r = reds.size();

      for(ll i = 0; i < b; i++){
         if(blues[i] < i + 1){
            flag = false;
         }
      }

      for(ll i = 0; i < r; i++){
         if(reds[i] > n - i){
            flag = false;
         }
      }

      // if(blues[0] >= 1 && b){
      //    flag1 = true;
      // }

      // if(reds[r - 1] <= 1 && r){
      //    flag1 = true;
      // }

      // if(reds[0] <= n && r){
      //    flag2 = true;
      // }
      
      // if(blues[b - 1] >= n && b ){
      //    flag2 = true;
      // }
      cout<<((flag) ? "YES" : "NO")<<endl;
   };

   return 0;
}