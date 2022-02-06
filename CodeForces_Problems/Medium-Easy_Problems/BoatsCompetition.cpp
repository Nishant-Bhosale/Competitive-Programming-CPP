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

      vector<ll> arr;
      for(int i = 0; i < n; i++){
         ll num;
         cin>>num;
         arr.emplace_back(num);
      }

      ll maxV = -1; 
      for(ll i = 2; i <= 2*n; i++){
         ll ans = 0;
         for(ll j = 1; j <= ((i + 1) / 2) - 1; j++){
               if(i - j > n){
                  continue;
               };

               ll cnt1 = count(arr.begin(), arr.end(), j);
               ll cnt2 = count(arr.begin(), arr.end(), i - j);
               ans += min(cnt1, cnt2);
         }
         if(i % 2 == 0){
            ll cntS = count(arr.begin(), arr.end(), i / 2);
            ans += (cntS / 2);
         }
         maxV = max(maxV, ans);
      }

      cout<<maxV<<endl;
   }

   return 0;
}