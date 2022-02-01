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
      string s;
      cin>>s;

      ll cnt1 = count(s.begin(), s.end(), '1');
      ll cnt0 = count(s.begin(), s.end(), '0');

      if(cnt1 == cnt0){
         cout<<(cnt1 - 1)<<endl;
         continue;
      }
      if(cnt1 < cnt0){
         cout<<cnt1<<endl;
         continue;
      }
      if(cnt1 > cnt0){
         cout<<cnt0<<endl;
         continue;
      }
   }

   return 0;
}