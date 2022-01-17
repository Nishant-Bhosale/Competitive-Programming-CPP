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
      map<char, int> mp;
      for(int i = 0; i < s.size(); i++){
         mp[s[i]]++;
      }

      for(auto it : mp){
         if(it.second % 2 == 0){
            ans += it.first;
         }
      }     

      ans += ans;

      for(auto it : mp){
         if(it.second % 2 != 0){
            ans += it.first;
         }
      } 

      cout<<ans<<endl;
   }

   return 0;
}