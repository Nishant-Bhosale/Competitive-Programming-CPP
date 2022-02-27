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
      ll n;
      cin>>n;

      string s;
      cin>>s;

      bool arr[2]; 
      if(n == 1){
         cout<<0<<endl;
         continue;
      }

      for(ll i = 0; i < n; i++){
         if(s[i] == '>'){
            arr[0] = 1;
            continue;
         }
         if(s[i] == '<'){
            arr[1] = 1;
         }
      }

      if(!arr[0] || !arr[1]){
         cout<<0<<endl;
         continue;
      }

      if(s[0] == '>' || s[n - 1] == '<'){
         cout<<0<<endl;
         continue;
      }

      ll cnt1 = 0, cnt2 = 0;

      for(ll i = 0; i < n; i++){
         if(s[i] != '>'){
            cnt1++;
         }else{
            break;
         }
      }
      for(ll i = n - 1; i >= 0; i--){
         if(s[i] != '<'){
            cnt2++;
         }else{
            break;
         }
      }

      cout<<(min(cnt1, cnt2))<<endl;
   }

   return 0;
}