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
      ll a, b;
      cin>>a>>b;

      if(a % b == 0){
         cout<<0<<endl;
         continue;
      }

      if(a < b){
         cout<<(b - a)<<endl;
         continue;
      }

      ll ans = 0;
      ll val = a / b;

      val++;

      ans = (b * val) - a;

      cout<<ans<<endl;
   }

   return 0;
}