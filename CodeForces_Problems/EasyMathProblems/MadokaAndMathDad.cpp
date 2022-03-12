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

      if(n == 1){
         cout<<1<<endl;
         continue;
      }

      if(n == 2){
         cout<<2<<endl;
         continue;
      }

      if(n == 3){
         cout<<21<<endl;
         continue;
      }

      ll rem = n % 3;

      string ans = "";
      if(rem == 0){
         ll div = n / 3;
         for(ll i = 0; i < div; i++){
            ans += "21";
         }
         cout<<ans<<endl;
         continue;
      }

      if(rem == 1){
         ans += "1";
         for(ll i = 0; i < n / 3; i++){
            ans += "21";
         }
      }else{
         ans += "2";
         for(ll i = 0; i < n / 3; i++){
            ans += "12";
         }
      }

      cout<<ans<<endl;
   }

   return 0;
}