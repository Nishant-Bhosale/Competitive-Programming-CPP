#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll n, k;
   cin>>n>>k;

   string s;
   cin>>s;

   set<char> st;
   for(ll i = 0; i < k; i++){
      char ch;
      cin>>ch;
      st.insert(ch);
   }

   for(ll i = 0; i < s.size(); i++){
      ll j = i;
      while(j < s.size() && st.count(s[i])){
         j++;
         s[i] = '1';
      }
   }
   
   ll ans = 0;
   ll cnt = 0;
   for(ll i = 0; i < s.size(); i++){
      if(s[i] == '1'){
         cnt++;
      }else{
         cnt = 0;
      }
      ans += cnt;
   }
   cout<<ans<<endl;
   return 0;
}