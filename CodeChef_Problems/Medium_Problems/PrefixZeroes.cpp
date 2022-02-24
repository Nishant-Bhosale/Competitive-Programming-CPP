#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   ll t;
   cin>>t;

   while(t--){
      ll n, k;
      cin>>n>>k;
      string s;
      cin>>s;

      ll cnt = 0;
      for(ll i = 0; i < s.size(); i++){
         ll val = (s[i] - '0');
         if(val + k < 10){
            break;
         }

         k = 10 - val + ((k - 10 + val) / 10) * 10;

         s[i] = '0';
      }

      for(ll i = 0; i < n; i++){
         if(s[i] == '0'){
            cnt++;
         }else{
            break;
         }
      }

      cout<<cnt<<endl;
   }

   return 0;
}