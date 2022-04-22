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
      for(ll i = 0;i<n;i++){
         ll num;
         cin>>num;
         mp[num]++;
      }

      bool flag = false;

      for(auto it : mp){
         if(it.second >= 3){
            cout<<it.first<<endl;
            flag = true;
            break;
         }
      }

      if(!flag){
         cout<<-1<<endl;
      }
   };

   return 0;
}