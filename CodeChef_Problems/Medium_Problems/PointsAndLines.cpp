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
      set<ll> stx;
      set<ll> sty;

      for(ll i = 0; i < n; i++){
         ll x, y;
         cin>>x>>y;
         stx.insert(x);
         sty.insert(y);
      }

      cout<<(stx.size() + sty.size())<<endl;
   }

   return 0;
}