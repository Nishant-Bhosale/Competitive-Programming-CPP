#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

void solve(){
   int n;
   cin>>n;

   string init;
   string final;
   cin>>init>>final;

   if(init == final){
      cout<<"YES"<<endl;
      return;
   }

   init.push_back('0');
   final.push_back('0');

   int cnt = 0;

   for(int i = 0; i < n; i++){
      cnt += (init[i] == '1') - (init[i] == '0');

      if(cnt != 0 && (init[i+1] == final[i+1]) != (init[i] == final[i])){
         cout<<"NO"<<endl;
         return;
      }
   }

   cout<<"YES"<<endl;
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int t;
   cin>>t;

   while(t--){
      solve();
   }

   return 0;
}