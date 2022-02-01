#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

bool characterWins(ll hc, ll dc, ll hm, ll dm, ll i, ll coins, ll attack, ll health){
   hc += (i * health);
   dc += ((coins - i) * attack);

   ll moves1 = ceil(hc /(1.0 * dm));
   ll moves2 = ceil(hm /(1.0 * dc));

   if(moves2 >= moves1 + 1){
      return false;
   }
   return true;
}

void solve(){
   ll hc, dc, hm, dm;
   cin>>hc>>dc>>hm>>dm;

   ll coins, attack, health;
   cin>>coins>>attack>>health;

   for(ll i = 0; i <= coins; i++){
      if(characterWins(hc, dc, hm, dm, i, coins, attack, health)){
         cout<<"YES"<<endl;
         return;
      }
   }
   cout<<"NO"<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}