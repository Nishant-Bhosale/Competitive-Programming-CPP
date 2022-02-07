#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
 
typedef long long ll;
 
void solve(){
   ll n, k;
   string s;
   cin>>n>>k;
   cin>>s;
 
   if(k == 0){
      cout<<1<<endl;
      return;
   }
 
   string ans = s;
   reverse(ans.begin(), ans.end());
   if(ans == s){
      cout<<1<<endl;
   }else{
      cout<<2<<endl;
   }
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