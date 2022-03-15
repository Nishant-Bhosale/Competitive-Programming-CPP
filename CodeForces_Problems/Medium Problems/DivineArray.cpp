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

      for(ll i =  0; i < n; i++){
         cin>>arr[i];
      }

      ll q;
      cin>>q;

      vector<pair<ll, ll>> pr;

      for(ll i = 0; i < q; i++){
         ll num1, num2;
         cin>>num1>>num2;
         pr.emplace_back(make_pair(num1, num2));
      }

      vector<vector<ll>> ans;
      ans.emplace_back(arr);
      for(ll i = 1; i < 1e9; i++){
         vector<ll> temp;
         for(ll j = 0; j < n; j++){
            temp.emplace_back(count(ans[i - 1].begin(), ans[i - 1].end(), ans[i-1][j]));
         }
         if(temp == ans[i - 1]){
            break;
         }else{
            ans.emplace_back(temp);
         }
         // if(ans[i] == ans[i - 1]){
         //    break;
         // }
      }

      for(ll i = 0; i < pr.size(); i++){
         if(pr[i].second >= ans.size()){
            cout<<(ans[ans.size() - 1][pr[i].first - 1])<<endl;
         }else{
            cout<<(ans[pr[i].second][pr[i].first - 1])<<endl;
         }
      }
   }

   return 0;
}