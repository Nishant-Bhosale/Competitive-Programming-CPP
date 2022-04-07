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
      ll a, b, c, d, e, f;

      cin>>a>>b>>c>>d>>e>>f;

      ll m = min(a, f);
      a -= m;
      f -= m;

      m = min(b, d);
      b -= m;
      d -= m;

      m = min(c, e);
      c -= m;
      e -= m;

      ll ans = m * 2;

      ans -= 2 * min(b, f);
      cout<<ans<<endl;
      // c , e

   };

   return 0;
}