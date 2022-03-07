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

      vector<ll> arr(n + 1);
      string s = "";
      for(ll i = 0; i < n; i++){
         cin>>arr[i];
         s += to_string(arr[i]);
      }

      if(count(s.begin(), s.end(), '0') == 0){
         cout<<0<<endl;
         continue;
      }

      ll idx = 0, lidx = 0;
      for(ll i = 0; i < n; i++){
         if(s[i] == '1'){
            idx = i;
            continue;
         }else{
            break;
         }
      }

      for(ll i = s.size() - 1; i >= 0; i--){
         if(s[i] == '1'){
            lidx = i;
            continue;
         }else{
            break;
         }
      }

      cout<<(abs(idx - lidx))<<endl;
   }

   return 0;
}