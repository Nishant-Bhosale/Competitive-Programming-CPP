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
      ll n;
      cin>>n;

      string s;
      cin>>s;

      ll cnt = 0, b = 0;
      string ans = "";

      for(ll i = 0; i < n; i++){
         ans += s[i];
         if(ans == "()" || ans == "((" || ans == "))"){
            b += 2;
            ans = "";
            cnt++;
         }else{
            if(ans.length() > 1){
               if(s[i] == ')'){
                  b += ans.length();
                  cnt++;
                  ans = "";
               }
            }
         }
      }

      cout<<cnt<<" "<<(n - b)<<endl;
   };

   return 0;
}