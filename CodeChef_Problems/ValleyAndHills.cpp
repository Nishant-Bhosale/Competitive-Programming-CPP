#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;

   cin>>t;

   while(t--){
      int m, n;

      cin>>m>>n;

      string ans = "";

      if(m > n){
         for(int i = 0; i < n; i++){
            ans += "01";
         }

         for(int i = 0; i < m - n; i++){
            ans += "010";
         }
      }else if(m == n){
         for(int i = 0; i < m + 1; i++){
            ans += "01";
         }
      }else if(m < n){
         for(int i = 0; i < m; i++){
            ans += "10";
         }

         for(int i = 0; i < n - m; i++){
            ans += "101";
         }
      }

      cout<<ans.size()<<endl;
      cout<<ans<<endl;
   }

   return 0;
}

