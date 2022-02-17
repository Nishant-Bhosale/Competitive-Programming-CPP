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

      ll ans = INT_FAST64_MAX;
      for(ll i = 1; i * i <= n; i++){
         ans = min(ans, (i - 1) + (((n - i) + i - 1)/ i));
      }

      cout<<ans<<endl;
   }

   return 0;
}