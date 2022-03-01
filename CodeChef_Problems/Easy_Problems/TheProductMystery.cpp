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
      ll b, c;
      cin>>b>>c;

      if(b % c == 0){
         cout<<1<<endl;
         continue;
      }

      cout<<(c / __gcd(b, c))<<endl;

      //Brute force
      // ll ans = 0;
      
      // for(ll i = 1; i <= 1e18; i++){
      //    if((i * b) % c == 0){
      //       ans = i;
      //       break;
      //    }
      // }
   }

   return 0;
}