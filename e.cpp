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

      vector<ll> arr(n);
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
      }

      string s;
      cin>>s;

      ll cntS = count(s.begin(), s.end(), 'S');
      ll cntN = count(s.begin(), s.end(), 'N');

      if(is_sorted(arr.begin(), arr.end())){
         cout<<0<<endl;
         continue;
      }

      if(cntS == s.size() || cntN == s.size()){
         cout<<-1<<endl;
         continue;
      }

      if(s[0] == 'N' && s[s.size() - 1] == 'S'){
         cout<<1<<endl;
         continue;
      }
      if(s[0] == 'S' && s[s.size() - 1] == 'N'){
         cout<<1<<endl;
         continue;
      }
      
      ll cnt = 0, idx = 0;
      char cur;
      for(ll i = 0; i < n - 1; i++){
         if(arr[i] <= arr[i + 1]){
            continue;
         }
         if(s[i] == 'N'){
            cur = 'N';
            idx = i;
            break;
         }else{
            cur = 'S';
            idx = i;
            break;
         }
      }

      ll lidx = 0;
      for(ll i = idx; i < n; i++){
         if(cur == 'N'){
            if(s[i] == 'S'){
               lidx = i;
            }
         }else{
            if(s[i] == 'N'){
               lidx = i;
            }
         }
      }

      if(lidx != (n - 1)){
         cnt += 2;
      }else{
         cnt++;
      }

      cout<<cnt<<endl;
   }

   return 0;
}