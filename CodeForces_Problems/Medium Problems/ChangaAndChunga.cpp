#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll x, y, z;

   cin>>x>>y>>z;

   ll totalCoconuts = 0;

   totalCoconuts = (x + y) / z;

   ll ans;
   if(totalCoconuts == ((x / z) + (y / z))){
      ans = 0;
   }else{
      ans = min(z - (x % z), z - (y % z));
   }

   cout<<totalCoconuts<<" "<<ans<<endl;
   return 0;
}