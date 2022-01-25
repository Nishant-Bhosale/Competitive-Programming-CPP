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
      ll a, b, x, y, n;
      cin>>a>>b>>x>>y>>n;
      ll ans = 1e18;
      for(int i = 0;  i < 2; i++){

         ll val1 = min(n, a - x);
         ll val2 = min(n - val1, b - y);

         ans = min(ans, (a - val1) * (b - val2));
         swap(a, b);
         swap(x, y);
      }

      cout<<ans<<endl;
   }

   return 0;
}