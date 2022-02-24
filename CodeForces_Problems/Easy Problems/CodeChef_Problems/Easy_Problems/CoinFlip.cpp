#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll g;
   cin>>g;

   while(g--){
      ll n, side, q;
      cin>>side>>n>>q;

      if(n % 2 == 0 || side == q){
         cout<<(n / 2)<<endl;
      }else{
         cout<<(n / 2) + 1<<endl;
      }
   }
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