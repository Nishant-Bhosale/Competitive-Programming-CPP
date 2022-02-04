#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

ll cal(ll num){
   ll ans = 0;
   while(num){
      ans += num % 10;
      num /= 10;
   }
   return ans;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n;
   cin>>n;

   ll ans = 0;
   while(n){
      ans++;
      if(cal(ans) == 10){
         n -= 1;
      }
   }
   cout<<ans<<endl;
   return 0;
}