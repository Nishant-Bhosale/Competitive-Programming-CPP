#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(x) x.begin(), x.end()

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;
   while(t--){
      ll x, y;
      cin>>x>>y;

      if(x == 0 && y == 0){
         cout<<0<<endl;
         continue;
      }

      ll s1 = sqrt((x*x) + (y*y));
      if(s1 * s1 == (x*x) + (y*y)){
         cout<<1<<endl;
      }else{
         cout<<2<<endl;
      }
   };

   return 0;
}