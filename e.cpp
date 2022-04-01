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

      map<ll, ll> mp;

      for(ll i = 1;i<=n;i++){
         ll num;
         cin>>num;
         mp[num] = i;
      }

      bool flag = true;
      for(auto it = mp.rbegin(); it != mp.rend(); it++){
         // cout<<it->first<<" "<<it->second<<endl;
         ll temp = mp[it->first];
         cout<<mp[it->first - 1]<<endl;
         if(mp.count((it->first) - 1) && mp[(it->first) - 1] != temp){
            flag = true;
         }else{
            flag = false;
            break;
         }
      }

      cout<<(flag ? "Yes" : "No")<<endl;
   };

   return 0;
}