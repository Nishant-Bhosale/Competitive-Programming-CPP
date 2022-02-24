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

   while(t--){
      string s;
      cin>>s;

      if(count(s.begin(), s.end(), '1') == s.size()){
         cout<<"YES"<<endl;
         continue;
      }
       if(count(s.begin(), s.end(), '0') == s.size()){
          cout<<"NO"<<endl;
          continue;
       }

      bool flag = true;
      int startIdx = s.size(), lidx = -1;
      for(int i = 0; i < s.size(); i++){
         if(s[i] == '1'){
            startIdx = min(startIdx, i);
            lidx = max(lidx, i);
         }
      }

      if(lidx == -1){
         cout<<"NO"<<endl;
         continue;
      }

      for(int i = startIdx; i <= lidx; i++){
         if(s[i] == '0'){
            flag = false;
         }
      }

      cout<<(flag ? "YES" : "NO")<<endl;
   }

   return 0;
}