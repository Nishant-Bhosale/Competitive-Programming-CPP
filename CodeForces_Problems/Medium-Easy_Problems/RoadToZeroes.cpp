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
      ll x, y, a, b;
      cin>>x>>y>>a>>b;

      if(x == 0 && y == 0){
         cout<<0<<endl;
         continue;
      }
      if((x == 0 && y != 0)){
         cout<<(a * y)<<endl;
         continue;
      }
      if(y == 0 && x != 0){
         cout<<(a * x)<<endl;
         continue;
      }

      if(x == y){
         cout<<(min((2*x)* a, x * b))<<endl;
         continue;
      }

      ll add = x + y;
      cout<<(min(add * a, (b * (min(x, y))) + (a * abs(x - y))))<<endl;
   }

   return 0;
}