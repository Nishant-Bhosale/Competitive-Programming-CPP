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
      ll n, k;
      cin>>n>>k;

      if(n == k && k == 1){
         cout<<0<<endl;
         continue;
      }

      if(k == 1){
         cout<<(n - 1)<<endl;
         continue;
      }

      ll ans = 0, currentPcs = 1;

      while(currentPcs < k){
         currentPcs *= 2;
         ans++;
      }
      
      if(currentPcs < n){
         ans += (n - currentPcs - 1 + k) / k;
      }
      cout<<ans<<endl;
   }

   return 0;
}