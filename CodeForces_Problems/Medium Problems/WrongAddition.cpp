#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   ll a, s;
   cin>>a>>s;

   vector<int> b;
   while(s){
      ll x = a % 10;
      ll y = s % 10;

      if(x <= y) b.emplace_back(y - x);
      else{
         s /= 10;
         y += 10 * (s % 10);

         if(x < y && y >= 10 && y <= 19){
            b.emplace_back(y - x);
         }else{
            cout<<-1<<endl;
            return;
         }
      }
      a /= 10;
      s /= 10;
   }

   if(a){
      cout<<-1<<"\n";
      return;
   }

   while(b.back() == 0){
      b.pop_back();
   }

   for(int i = b.size() - 1; i >= 0; i--){
      cout<<b[i];
   }
   cout<<"\n";
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}