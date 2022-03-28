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
      ll n;
      cin>>n;

      string s;
      cin>>s;

      ll ans = 0;
      
      for(ll i = 0; i < n - 1; i++){
         if(s[i] == '0' && s[i + 1] == '0'){
            ans += 2;
         }
      }
      for(ll i = 0; i < n - 2; i++){
         if(s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0'){
            ans += 1;
         }
      }

      cout<<ans<<endl;
   };

   return 0;
}