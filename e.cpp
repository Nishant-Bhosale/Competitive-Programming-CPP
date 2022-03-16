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
      string s;
      cin>>n>>s;

      if(count(s.begin(), s.end(), s[0]) == s.size()){
         cout<<s<<endl;
         continue;
      }

      ll cnt1 = count(s.begin(), s.end(), '1');
      ll cnt0 = count(s.begin(), s.end(), '0');

      string ans = "";
      for(ll i = 0; i < cnt0; i++){
         ans += '0';
      }
      for(ll i = 0; i < cnt1; i++){
         ans += '1';
      }

      cout<<ans<<endl;
   }

   return 0;
}