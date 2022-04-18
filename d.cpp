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
      ll n, r, b;
      cin>>n>>r>>b;

      ll val = ceil((r + 1)/(b + 1));
      string ans = "";
      string temp = "";
      for(ll i = 0; i < val; i++){
         temp += 'R';
      }
      bool flag = true;
      while(r > 0 || b > 0){
         if(flag){
            ans += temp;
            r -= val;
            flag = false;
         }else{
            if(b){
               ans += 'B';
               b--;
            }
            flag = true;
         }
      }

      if(n % 2 == 0){
         ans.pop_back();
      }
      cout<<ans<<endl;
   };

   return 0;
}