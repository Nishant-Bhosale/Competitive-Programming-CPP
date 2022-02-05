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

      if(a == 0 || b == 0){
         cout<<0<<endl;
         continue;
      }

      // if(a == b && a % 2 == 0){
      //    cout<<(a / 2)<<endl;
      //    continue;
      // }

      // if(a == b && a % 2 == 1){
      //    cout<<(a / 2) + 1<<endl;
      //    continue;
      // }

      // ll ans = 0;

      // while(a >= 2 || b >= 2){
      //    ll maxVal = max(a, b);
      //    if(maxVal == a){
      //       a -= 2;
      //       b -= 1;
      //       ans++;
      //    }else{
      //       a--;
      //       b -= 2;
      //       ans++;
      //    }
      // }

      cout<<min(a, min(b, (a + b) / 3))<<endl;
      // cout<<ans<<endl;
   }

   return 0;
}