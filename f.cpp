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
      ll n, a;
      cin>>n>>a;

      ll andOp = n & a;
      cout<<andOp;

      if(andOp >= a || andOp <= n){
         cout<<((andOp % 2) ? "EVEN" : "ODD")<<endl;
      }else{
         cout<<"IMPOSSIBLE"<<endl;
      }
   }

   return 0;
}