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
      ll str, intel, inv;
      cin>>str>>intel>>inv;

      if(inv == 0){
         if(str > intel){
            cout<<1<<endl;
         }else{
            cout<<0<<endl;
         }
         continue;
      }

      ll val = max(0LL, ((inv + intel - str + 2) / 2));
      ll a = (inv - val + 1);
      ll ans = max(0LL, a);
      // Brute Force
      // ll cnt = 0, val = inv;
      // ll temp1 = str, temp2 = intel;

      // if(str > intel){
      //    cnt = 1;
      // }

      // set<pair<ll,ll>> st;
      // while(val){
      //    if(temp1 + (inv - val) > (temp2 + val)){
      //       st.insert(make_pair(temp1 + (inv - val), temp2 + val));
      //    }
         
      //    if(temp1 + val > (temp2 + (inv - val))){
      //       st.insert(make_pair((temp1 + val), (temp2) + (inv - val)));
      //    }
      //    val--;
      // }

      cout<<ans<<endl;
   };

   return 0;
}