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

      ll cnt0 = count(all(s), '0');
      ll cnt1 = count(all(s), '1');
      if(cnt0 == n){
         cout<<1<<endl;
         continue;
      }

      if(cnt1 == n){
         cout<<1<<endl;
         continue;
      }

      if(cnt0 == cnt1){
         cout<<(2 * cnt0)<<endl;
         continue;
      }

      if(cnt0 > cnt1){
         cout<<((2 * cnt1) + 1)<<endl;
         continue;
      }

      if(cnt1 > cnt0){
         cout<<((2 * cnt0) + 1)<<endl;
         continue;
      }
   };

   return 0;
}