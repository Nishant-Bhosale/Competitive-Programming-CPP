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
      ll n, a, b;
      cin>>n>>a>>b;

      if(n == 2){
         cout<<a<<" "<<b<<"\n";
         continue;
      }

      // if(a <= (n / 2) && b <= (n / 2)){
      //    cout<<-1<<endl;
      //    continue;
      // }

      // if(a == n || b == 1){
      //    cout<<-1<<endl;
      //    continue;
      // }

      // if(a > (n / 2) && b > (n / 2)){
      //    cout<<-1<<endl;
      //    continue;
      // }

      vector<ll> bo(n + 1, 0LL);
      vector<ll> ans;

      ans.emplace_back(a);
      bo[a] = 1;
      for(ll i = b + 1; i <= n; i++){
         if(!bo[i]){
            ans.emplace_back(i);
            bo[i] = 1;
         }
      }

      if(ans.size() == (n / 2)){
         ans.emplace_back(b);
         bo[b] = 1;
         for(ll i = 1; i < bo.size(); i++){
            if(!bo[i]){
               if(i != b){
                  ans.emplace_back(i);
                  bo[i] = 1;
               }
            }
         }
      }else{
         for(ll i = a + 1; i <= n && (ans.size() <= (n / 2)); i++){
            if(!bo[i]){
               if(i != b){
                  ans.emplace_back(i);
                  bo[i] = 1;
               }
            }
         }

         ans.emplace_back(b);
         bo[b] = 1;
         for(ll i = 1; i < bo.size(); i++){
            if(!bo[i]){
               if(i != b){
                  ans.emplace_back(i);
                  bo[i] = 1;
               }
            }
         }
      }

      ll minVal = *min_element(ans.begin(), ans.begin() + (n / 2));
      ll maxVal = *max_element(ans.begin() + (n / 2), ans.end());
      if(ans.size() == n && minVal == a && maxVal == b){
         for(ll i = 0; i < ans.size(); i++){
            cout<<ans[i]<<" ";
         }
         cout<<endl;
      }else{
         cout<<-1<<endl;
      }
   }

   return 0;
}