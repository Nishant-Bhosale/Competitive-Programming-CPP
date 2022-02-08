#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

string repeat(string s, ll num){
   string res = "";
   for(ll i = 0; i < num; i++){
      res += s;
   }
   return res;
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n;
      cin>>n;

      vector<pair<ll,ll>> arr;

      for(ll i = 0; i < n; i++){
         ll a, b;
         cin>>a>>b;
         arr.emplace_back(a, b);
      }

      sort(arr.begin(), arr.end());

      string ans = "";
      ll x = 0, y = 0;
      bool flag = true;
      for(int i = 0; i < n; i++){
         if(arr[i].first > x){
            ans += repeat("R", arr[i].first - x);
            x += arr[i].first - x;
         }

         if(arr[i].second > y){
            ans += repeat("U", arr[i].second - y);
            y += arr[i].second - y;
         }

         if(arr[i].first < x){
            flag = false;
            break;
         }
         if(arr[i].second < y){
            flag = false;
            break;
         }
      }
      if(flag){
         cout<<"YES"<<endl;
         cout<<ans<<endl;
      }else{
         cout<<"NO"<<endl;
      }
      // for(auto it : arr){
      //    cout<<it.first<<" "<<it.second<<endl;
      // }
   }

   return 0;
}