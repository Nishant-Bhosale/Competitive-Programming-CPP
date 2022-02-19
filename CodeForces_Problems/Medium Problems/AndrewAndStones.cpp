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

      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      if(n == 3 && arr[1] % 2 == 1){
         cout<<-1<<endl;
         continue;
      }

      bool flag = true;
      for(ll i = 1; i < n - 1; i++){
         if(arr[i] != 1){
            flag = false;
            break;
         }
      }

      if(flag){
         cout<<-1<<endl;
         continue;
      }

      ll ans = 0;
      for(ll i = 1; i < n - 1; i++){
         ans += (arr[i] + 1) / 2;
      }

      cout<<ans<<endl;
   }

   return 0;
}