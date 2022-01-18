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
   // USE A MAP TO CALCULATE THE DISTANCE BETWEEN TWO SAME ELEMENTS  
   while(t--){
      ll n;
      cin>>n;

      map<ll, ll> mp;
      ll ans = -1;
      for(int i = 1; i <= n; i++){
         ll num;
         cin>>num;
         if(mp[num]){
            ans = max(ans, n - i + mp[num]);
         }         
         mp[num] = i;
      }
      cout<<ans<<endl;
   }

   return 0;
}