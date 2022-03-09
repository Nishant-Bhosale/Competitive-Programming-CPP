#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;
void solve(){
   string s;
      string c;
      cin>>s>>c;

      if(s == c){
         cout<<"YES"<<endl;
         return;
      }

      if(count(s.begin(), s.end(), c[0]) == s.size()){
         cout<<"YES"<<endl;
         return;
      }

      if(s.size() == 1 && s != c){
         cout<<"NO"<<endl;
         return;
      }
      ll cnt = count(s.begin(), s.end(), c[0]);
      ll idx = s.find(c[0]);
      ll sz = s.size();

      for(ll i = 0; i < cnt; i++){
         for(ll j = 0; j < s.size(); j++){
            if(s[j] == c[0]){
               if(j % 2 == 0 && (sz - j - 1) % 2 == 0){
                  cout<<"YES"<<endl;
                  return;
               }
            }
         }
      }
      cout<<"NO"<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}