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
      ll n;
      cin>>n;

      string s;
      cin>>s;

      ll ans = 0, cnt = 0;
      for(ll i = 0; i < n - 1; i++){
         if(s[i] == s[i + 1]){
            ans++;
            i++;
            cnt += 2;
         }
      }

      ans += (n - cnt);

      cout<<ans<<endl;
   }

   return 0;
}