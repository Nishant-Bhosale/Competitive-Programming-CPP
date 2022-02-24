#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   int n, k, ans = 0;
   string s;

   cin>>n>>k>>s;
   int xo = 0;
   for(int i = 0; i <= n - k; i++) {
      xo ^= s[i] - '0';
   }
   if(xo == 1){
      ans++;
   }

   int indbeg = 0, indend = n - k + 1;

   while(indend < n){
      xo ^= s[indbeg++] - '0';
      xo ^= s[indend++] - '0';

      if(xo == 1){
         ans++;
      }
   }

   cout<<ans<<endl;
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