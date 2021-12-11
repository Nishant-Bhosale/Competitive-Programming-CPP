#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   int t;

   cin>>t;

   while(t--){
      int n;
      cin>>n;

      int cnt1 = 0, cnt0 = 0;
      for(int i = 0; i < n; i++){
         int num;
         cin>>num;

         if(num == 1){
            cnt1++;
         }else if(num == 0){
            cnt0++;
         }
      }

      cout<<(1ll << cnt0) * (ll)(cnt1)<<endl;
   }

   return 0;
}