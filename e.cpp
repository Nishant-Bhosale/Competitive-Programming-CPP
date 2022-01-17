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

      string ans = "";
      if(s[1] != '0'){
         int a = 0;
         a += ((s[0] - '0') + (s[1] - '0'));
         string b = to_string(a);
         ans += b;
         for(int i = 2; i < s.size(); i++){
            ans += s[i];
         }
         cout<<ans<<endl;
      }else{
         int idx;
         for(int i = 2; i < s.size(); i++){
            if(s[i] != '0' && s[i + 1] != '0'){
               idx = i;
            }
         }
         for(int i = 0; i < idx; i++){
            ans += s[i];
         }

         int a = 0;
         a += ((s[idx] - '0') + (s[idx + 1] - '0'));
         string b = to_string(a);
         ans += b;

         for(int i = idx + 2; i < s.size(); i++){
            ans += s[i];
         }
         cout<<ans<<endl;
      }
   }

   return 0;
}