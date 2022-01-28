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

      map<ll, ll> mp;
      for(int i = 0; i < n; i++){
         ll num; cin>>num;
         mp[num % 3]++;
      }

      ll cnt = mp[0];
      ll cntM1 = mp[1];
      ll cntM2 = mp[2];
      
      ll minVal = min(cntM1, cntM2);
      cnt += minVal;
      cntM1 -= minVal;
      cntM2 -= minVal;

      cnt += (cntM1 + cntM2) / 3;

      cout<<(cnt)<<endl;
   }

   return 0;
}