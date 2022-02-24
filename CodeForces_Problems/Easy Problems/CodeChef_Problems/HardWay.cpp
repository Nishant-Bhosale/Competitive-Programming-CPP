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
      ll a, b, c, d, e, f, ans = 0;
      
      cin>>b>>a>>d>>c>>f>>e;

      if(a == c && e < a){
         ans = abs(b - d);
      }else if(c == e && a < c){
         ans = abs(d - f);
      }else if(a == e && c < a){
         ans = abs(b - f);
      }
      cout<<ans<<endl;
   }

   return 0;
}