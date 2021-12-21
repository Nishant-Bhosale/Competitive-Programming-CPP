#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      ll x, y;
      cin>>x>>y;
      
      if(x == y){
         cout<<"YES"<<"\n";
         continue;
      }

      if(x > 3){
         cout<<"YES"<<"\n";
         continue;
      }
      if(x == 1){
         cout<<(y == 1 ? "YES" : "NO")<<"\n";
         continue;
      }else{
         cout<<(y <= 3 ? "YES" : "NO")<<"\n";
      }

   }

   return 0;
}