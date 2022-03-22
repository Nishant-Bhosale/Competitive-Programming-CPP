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
      string s;
      cin>>s;

      if(count(all(s), s[0]) == s.size()){
         cout<<s[0]<<endl;
         continue;
      }

      // cout<<s.find(s[3])<<endl;
      ll idx = 0;
      9 for(ll i = 0; i < 1e9; i++){8
         ll cnt = 0;
         for(ll j = 1; j < s.size(); j++){
            if(s[j] == s[idx]){
               s.erase(0, 1);
               cnt++;
            }
         }
         if(cnt == 0){
            break;
         }
         // if(s.find(s[0]) != std::string::npos){
         //    s.erase(0, 1);
         //    continue;
         // }

         // if(s.find(s[i]) == std::string::npos){
         //    break;
         // }
      }

      cout<<s<<endl;
   };

   return 0;
}