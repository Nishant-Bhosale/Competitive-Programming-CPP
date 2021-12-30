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
      ll n; 
      cin>>n;
      string s;
      cin>>s;

      if(count(s.begin(), s.end(), s[0]) == n){
         cout<<s[0]<<s[1]<<endl;
         continue;
      }

      if(s[0] == s[1] || s[1] > s[0]){
         cout<<s[0]<<s[0]<<endl;
         continue;
      }
      
      string ans = "";
      ans += s[0];
      for(int i = 1; i < n; i++){
         if(s[i] <= s[i - 1]){
            ans += s[i];
         }else{
            break;
         }
      }
      
      cout<<ans;
      reverse(ans.begin(), ans.end());
      cout<<ans<<endl;
   }

   return 0;
}