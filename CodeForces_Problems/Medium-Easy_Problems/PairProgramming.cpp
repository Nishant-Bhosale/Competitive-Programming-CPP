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
      ll k, n, m;
      cin>>k>>n>>m;

      vector<ll> arr1(n);
      for(ll i = 0;i<n;i++) cin>>arr1[i];

      vector<ll> arr2(m);
      for(ll i = 0;i<m;i++) cin>>arr2[i];
      
      vector<ll> ans;

      ll pos1 = 0, pos2 = 0;
      bool flag = true;
      
      while(pos1 != n || pos2 != m){
         if(pos1 != n && arr1[pos1] == 0){
            ans.emplace_back(0);
            k++;
            pos1++;
         }else if(pos2 != m && arr2[pos2] == 0){
            ans.emplace_back(0);
            k++;
            pos2++;
         }else if(pos1 != n && arr1[pos1] <= k){
            ans.emplace_back(arr1[pos1]);
            pos1++;
         }else if(pos2 != m && arr2[pos2] <= k){
            ans.emplace_back(arr2[pos2]);
            pos2++;
         }else{
            flag = false;
            break;
         }
      }
      
      if(flag){
         for(ll i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
         }
         cout<<endl;
      }else{
         cout<<-1<<endl;
      }
   };

   return 0;
}